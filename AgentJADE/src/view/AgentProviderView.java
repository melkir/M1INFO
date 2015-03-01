package view;

import controller.AbstractController;
import org.gnome.gdk.Event;
import org.gnome.gtk.*;

public class AgentProviderView extends AbstractView {
    // ComboBoxText comboBoxTextGenre;
    // RadioGroup radioGroupNote;
    Window mainWindow;
    Entry entryArtist, entryName, entryPrice; // entrySearchMusic;
    TextView textViewMusicAvailable, textViewMusicSold;
    Button buttonAdd;

    private AbstractController controller;

    public AgentProviderView(AbstractController controller) {
        super("interface/AgentProvider.glade");
        this.controller = controller;
        initComposant();
    }

    private void initComposant() {
        // entrySearchMusic = (Entry) builder.getObject("search_music");                // Not implemented
        // comboBoxTextGenre = (ComboBoxText) builder.getObject("comboboxtext_genre");  // Bug
        // radioGroupNote = ((RadioButton) builder.getObject("1starts")).getGroup();    // Bug
        mainWindow = (Window) builder.getObject("mainWindow");
        textViewMusicAvailable = (TextView) builder.getObject("music_available");
        entryArtist = (Entry) builder.getObject("entry_artist");
        entryName = (Entry) builder.getObject("entry_name");
        entryPrice = (Entry) builder.getObject("entry_price");
        buttonAdd = (Button) builder.getObject("add_music");
        textViewMusicSold = (TextView) builder.getObject("music_sold");

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
