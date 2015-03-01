import controller.AbstractController;
import controller.PlatformManagerController;
import model.AbstractModel;
import model.PlatformManager;
import org.gnome.gtk.Gtk;
import view.PlatformManagerView;

public class Main {

    public static void main(String[] args) {
        Gtk.init(args);
        // Create the model
        AbstractModel model = new PlatformManager();
        // Create the controller
        AbstractController controller = new PlatformManagerController(model);
        // Create the window with the controller
        PlatformManagerView view = new PlatformManagerView(controller);
        // Add window as observer for the model
        model.addObserver(view);
        Gtk.main();
    }
}
