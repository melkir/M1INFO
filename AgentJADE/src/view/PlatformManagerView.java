package view;

import org.gnome.gdk.Event;
import org.gnome.gtk.*;

public class PlatformManagerView extends GenericView {
    Entry entryName;
    RadioButton radioProvider, radioSeeker;
    TextView textViewResult;
    Button buttonAdd;
    
    Button.Clicked buttonAddListener = new Button.Clicked() {
        @Override
        public void onClicked(Button button) {
            // Return if entry name is empty
            if (0 == entryName.getTextLength()) return;
            // Retrieve fields contents
            String name = "Agent" + (radioProvider.getActive() ? "Provider" : "Seeker") + ' ' + entryName.getText();
            // Add to the textViewResult the agent created
            TextBuffer textBuffer = textViewResult.getBuffer();
            textBuffer.insert(textBuffer.getIterEnd(), name + '\n');
            // Generate a new view
            GenericView agentView;
            // Assign the correct view
            if (radioProvider.getActive()) agentView = new AgentProviderView(builder);
            else agentView = new AgentSeekerView(builder);
            // Change title with the name of the agent
            Window w = agentView.getWindow();
            w.setTitle(name);
        }
    };

    public PlatformManagerView(Builder builder) {
        super(builder, "interface/PlatformManager.glade");
        mainWindow.connect(new Window.DeleteEvent() {
            @Override
            public boolean onDeleteEvent(Widget widget, Event event) {
                Gtk.mainQuit();
                return false;
            }
        });
        initComposant();
    }

    private void initComposant() {
        entryName = (Entry) builder.getObject("entry_name");
        radioProvider = (RadioButton) builder.getObject("radiobutton_provider");
        radioSeeker = (RadioButton) builder.getObject("radiobutton_seeker");
        buttonAdd = (Button) builder.getObject("button_add");
        textViewResult = (TextView) builder.getObject("textview_result");
        buttonAdd.connect(buttonAddListener);
    }
}
