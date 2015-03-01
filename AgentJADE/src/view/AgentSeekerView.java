package view;

import org.gnome.gdk.Event;
import org.gnome.gtk.*;

import java.util.Observable;

public class AgentSeekerView extends GenericView {

    // ComboBoxText comboBoxTextGenre;
    // RadioGroup radioGroupNote;
    Window mainWindow;
    Entry entryArtist, entryAlbum, entryMaxPrice, entryNbMusic, entryMaxBudget;
    Button buttonSubmit;

    public AgentSeekerView() {
        super("interface/AgentSeeker.glade");
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

    public static class CloseListener implements Window.DeleteEvent {
        @Override
        public boolean onDeleteEvent(Widget widget, Event event) {
            //TODO
            System.out.println("Agent deleted");
            // fireAgentDeleted()
            return false;
        }
    }
    
    @Override
    public void update(Observable o, Object arg) {

    }
}
