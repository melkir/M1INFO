package view;

import org.gnome.gtk.Builder;
import org.gnome.gtk.Window;

import java.io.FileNotFoundException;
import java.text.ParseException;

public class GenericView {

    protected final Builder builder;
    protected final Window mainWindow;

    public GenericView(Builder builder, String filepath) {
        this.builder = builder;
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
