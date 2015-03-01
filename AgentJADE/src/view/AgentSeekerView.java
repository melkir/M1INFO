package view;

import controller.AbstractController;
import org.gnome.gdk.Event;
import org.gnome.gtk.Button;
import org.gnome.gtk.Entry;
import org.gnome.gtk.Widget;
import org.gnome.gtk.Window;

public class AgentSeekerView extends AbstractView {

    // ComboBoxText comboBoxTextGenre;
    // RadioGroup radioGroupNote;
    Window mainWindow;
    Entry entryArtist, entryAlbum, entryMaxPrice, entryNbMusic, entryMaxBudget;
    Button buttonSubmit;

    private AbstractController controller;

    public AgentSeekerView(AbstractController controller) {
        super("interface/AgentSeeker.glade");
        this.controller = controller;
        initComposant();
    }

    private void initComposant() {
        // comboBoxTextGenre = (ComboBoxText) builder.getObject("comboboxtext_genre");  // Bug
        // radioGroupNote = ((RadioButton) builder.getObject("1starts")).getGroup();    // Bug
        mainWindow = (Window) builder.getObject("mainWindow");
        entryArtist = (Entry) builder.getObject("entry_artist");
        entryAlbum = (Entry) builder.getObject("entry_album");
        entryMaxPrice = (Entry) builder.getObject("entry_maxPrice");
        entryNbMusic = (Entry) builder.getObject("entry_nbMusic");
        entryMaxBudget = (Entry) builder.getObject("entry_budget");
        buttonSubmit = (Button) builder.getObject("button_submit");

        mainWindow.connect(new CloseListener());
    }

    @Override
    public void update(String str) {

    }

    public static class CloseListener implements Window.DeleteEvent {
        @Override
        public boolean onDeleteEvent(Widget widget, Event event) {
            //TODO
            // fireAgentDeleted()
            System.out.println("Agent deleted");
            return false;
        }
    }
}
