package model;

import observer.Observable;
import observer.Observer;

import java.util.ArrayList;

public abstract class AbstractModel implements Observable {

    private ArrayList<Observer> listObserver = new ArrayList<Observer>();

    // Efface les champs
    public abstract void reset();
    
    public void addObserver(Observer obs) {
        listObserver.add(obs);
    }
    
    public void notifyObserver(String str) {
        for (Observer obs : listObserver) obs.update(str);
    }
    
}
