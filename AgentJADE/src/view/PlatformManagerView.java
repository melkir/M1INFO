package view;

import controller.AbstractController;
import controller.AgentProviderController;
import controller.AgentSeekerController;
import model.AbstractModel;
import model.AgentProvider;
import model.AgentSeeker;
import org.gnome.gdk.Event;
import org.gnome.gtk.*;

public class PlatformManagerView extends AbstractView {
    Window mainWindow;
    Entry entryName;
    RadioButton radioProvider, radioSeeker;
    TextView textViewResult;
    Button buttonAdd;

    private AbstractController controller;

    Button.Clicked buttonAddListener = new Button.Clicked() {
        @Override
        public void onClicked(Button button) {
            if (0 == entryName.getTextLength()) return;
            System.out.println("Agent created");
            controller.reset();
            AbstractModel agentModel;
            AbstractController agentController;
            AbstractView agentView;
            if (radioProvider.getActive()) {
                agentModel = new AgentProvider();
                agentController = new AgentProviderController(agentModel);
                agentView = new AgentProviderView(agentController);
                agentModel.addObserver(agentView);
            } else {
                agentModel = new AgentSeeker();
                agentController = new AgentSeekerController(agentModel);
                agentView = new AgentSeekerView(agentController);
                agentModel.addObserver(agentView);
            }
            Window w = agentView.getWindow();
            w.setTitle("Agent" + (radioProvider.getActive() ? "Provider" : "Seeker") + ' ' + entryName.getText());
        }
    };

    public PlatformManagerView(AbstractController controller) {
        super("interface/PlatformManager.glade");
        this.controller = controller;
        initComposant();
    }

    private void initComposant() {
        mainWindow = (Window) builder.getObject("mainWindow");
        entryName = (Entry) builder.getObject("entry_name");
        radioProvider = (RadioButton) builder.getObject("radiobutton_provider");
        radioSeeker = (RadioButton) builder.getObject("radiobutton_seeker");
        buttonAdd = (Button) builder.getObject("button_add");
        textViewResult = (TextView) builder.getObject("textview_result");

        // buttonAdd.connect(buttonAddListener);
        mainWindow.connect(new CloseListener());
        buttonAdd.connect(buttonAddListener);
    }

    @Override
    public void update(String str) {
        String name = "Agent" + (radioProvider.getActive() ? "Provider" : "Seeker") + ' ' + entryName.getText();
        TextBuffer textBuffer = textViewResult.getBuffer();
        textBuffer.insert(textBuffer.getIterEnd(), name + '\n');
    }

    public static class CloseListener implements Window.DeleteEvent {
        @Override
        public boolean onDeleteEvent(Widget widget, Event event) {
            Gtk.mainQuit();
            return false;
        }
    }

}
