package controller;

import model.AgentSeeker;
import view.AgentSeekerView;

public class AgentSeekerController {
    private AgentSeeker model;
    private AgentSeekerView view;
    
    public AgentSeekerController(AgentSeeker model, AgentSeekerView view) {
        this.model = model;
        this.view = view;
    }
}
