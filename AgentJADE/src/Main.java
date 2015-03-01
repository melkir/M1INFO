import controller.PlatformManagerController;
import model.PlatformManager;
import org.gnome.gtk.Builder;
import org.gnome.gtk.Gtk;
import view.PlatformManagerView;

public class Main {

    public static void main(String[] args) {
        Gtk.init(args);
        PlatformManagerController pmc;
        pmc = new PlatformManagerController(new PlatformManager(), new PlatformManagerView());
        Gtk.main();
    }
}
