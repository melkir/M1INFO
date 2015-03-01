package controller;

import model.AgentProvider;
import view.AgentProviderView;

public class AgentProviderController {
    private AgentProvider model;
    private AgentProviderView view;

    public AgentProviderController(AgentProvider model, AgentProviderView view) {
        this.model = model;
        this.view = view;
    }
}
