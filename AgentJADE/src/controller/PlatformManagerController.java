package controller;

import model.PlatformManager;
import view.PlatformManagerView;

public class PlatformManagerController {
    private PlatformManager model;
    private PlatformManagerView view;
    
    public PlatformManagerController(PlatformManager model, PlatformManagerView view) {
        this.model = model;
        this.view = view;
    }
}
