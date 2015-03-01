package view;

import org.gnome.gdk.Event;
import org.gnome.gtk.*;

import java.util.Observable;

public class PlatformManagerView extends GenericView {
    Window mainWindow;
    Entry entryName;
    RadioButton radioProvider, radioSeeker;
    TextView textViewResult;
    Button buttonAdd;
    
    // Temporary method
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
            if (radioProvider.getActive()) agentView = new AgentProviderView();
            else agentView = new AgentSeekerView();
            // Change title with the name of the agent
            Window w = agentView.getWindow();
            w.setTitle(name);
        }
    };

    public PlatformManagerView() {
        super("interface/PlatformManager.glade");
        initComposant();
    }

    private void initComposant() {
        mainWindow = (Window) builder.getObject("mainWindow");
        entryName = (Entry) builder.getObject("entry_name");
        radioProvider = (RadioButton) builder.getObject("radiobutton_provider");
        radioSeeker = (RadioButton) builder.getObject("radiobutton_seeker");
        buttonAdd = (Button) builder.getObject("button_add");
        textViewResult = (TextView) builder.getObject("textview_result");
        
        mainWindow.connect(new CloseListener());
        buttonAdd.connect(buttonAddListener);
        buttonAdd.connect(new SubmitListener());
    }

    public static class SubmitListener implements Button.Clicked {
        @Override
        public void onClicked(Button button) {
            //TODO
            System.out.println("Agent created");
            // fireAgentCreated();
        }
    }
    
    public static class CloseListener implements Window.DeleteEvent {
        @Override
        public boolean onDeleteEvent(Widget widget, Event event) {
            Gtk.mainQuit();
            return false;
        }
    }
    
    @Override
    public void update(Observable o, Object arg) {

    }
}
