package controller;

import model.AgentProvider;
import model.AgentSeeker;
import model.PlatformManager;
import org.gnome.gtk.Button;
import view.AgentProviderView;
import view.AgentSeekerView;
import view.PlatformManagerView;

/**
 * Created by melkir on 03/03/15.
 */
public class PlatformManagerController {
    private PlatformManager model;
    private PlatformManagerView view;

    public PlatformManagerController(PlatformManager model, PlatformManagerView view) {
        this.view = view;
        this.model = model;
        this.view.addButtonAddClickedListener(new ButtonAddClickedListener());
    }

    /**
     * Create a new agent and show the corresponding view
     */
    private class ButtonAddClickedListener implements Button.Clicked {
        @Override
        public void onClicked(Button button) {
            String agentName, agentType;
            try {
                // Retrieve field content
                agentName = view.getAgentName();
                agentType = view.getAgentType();
                // Insert agent information into model
                model.addAgent(agentName, agentType);
                // Update the view to add the agent
                view.addAgentToView(model.getAgentInfo());
                // Show the agent corresponding view
                if (agentType.equals("provider")) {
                    AgentProviderView providerView = new AgentProviderView();
                    new ProviderController(new AgentProvider(view.getAgentName()), providerView);
                    providerView.setVisible(true);
                } else if (agentType.equals("seeker")) {
                    AgentSeekerView seekerView = new AgentSeekerView();
                    new SeekerController(new AgentSeeker(view.getAgentName()), seekerView);
                    seekerView.setVisible(true);
                } else System.out.println("unknown");

            } catch (NullPointerException ex) {
                // Show error message if name field is empty
                view.displayErrorMessage("You need to enter the agent name");
            }
        }
    }
}
