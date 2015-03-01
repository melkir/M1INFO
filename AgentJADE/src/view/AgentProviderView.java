package view;

import org.gnome.gtk.*;

public class AgentProviderView extends GenericView {
    // ComboBoxText comboBoxTextGenre;
    // RadioGroup radioGroupNote;
    Entry entryArtist, entryName, entryPrice; // entrySearchMusic;
    TextView textViewMusicAvailable, textViewMusicSold;
    Button buttonAdd;

    public AgentProviderView() {
        super("interface/AgentProvider.glade");
        initComposant();
    }

    private void initComposant() {
        // entrySearchMusic = (Entry) builder.getObject("search_music");                // Not implemented
        // comboBoxTextGenre = (ComboBoxText) builder.getObject("comboboxtext_genre");  // Bug
        // radioGroupNote = ((RadioButton) builder.getObject("1starts")).getGroup();    // Bug
        textViewMusicAvailable = (TextView) builder.getObject("music_available");
        entryArtist = (Entry) builder.getObject("entry_artist");
        entryName = (Entry) builder.getObject("entry_name");
        entryPrice = (Entry) builder.getObject("entry_price");
        buttonAdd = (Button) builder.getObject("add_music");
        textViewMusicSold = (TextView) builder.getObject("music_sold");
    }
}
