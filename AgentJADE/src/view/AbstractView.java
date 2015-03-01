package view;

import observer.Observer;
import org.gnome.gtk.Builder;
import org.gnome.gtk.Window;

import java.io.FileNotFoundException;
import java.text.ParseException;

public abstract class AbstractView implements Observer {

    protected final Builder builder;
    protected final Window mainWindow;

    public AbstractView(String filepath) {
        this.builder = new Builder();
        try {
            builder.addFromFile(filepath);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (ParseException e) {
            e.printStackTrace();
        }
        mainWindow = (Window) builder.getObject("mainWindow");
    }

    public Window getWindow() {
        return mainWindow;
    }

}
