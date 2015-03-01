package view;

import org.gnome.gtk.*;

public class AgentSeekerView extends GenericView {

    // ComboBoxText comboBoxTextGenre;
    // RadioGroup radioGroupNote;
    Entry entryArtist, entryAlbum, entryMaxPrice, entryNbMusic, entryMaxBudget;
    Button buttonSubmit;

    public AgentSeekerView(Builder builder) {
        super(builder, "interface/AgentSeeker.glade");
        initComposant();
    }

    private void initComposant() {
        // comboBoxTextGenre = (ComboBoxText) builder.getObject("comboboxtext_genre");  // Bug
        // radioGroupNote = ((RadioButton) builder.getObject("1starts")).getGroup();    // Bug
        entryArtist = (Entry) builder.getObject("entry_artist");
        entryAlbum = (Entry) builder.getObject("entry_album");
        entryMaxPrice = (Entry) builder.getObject("entry_maxPrice");
        entryNbMusic = (Entry) builder.getObject("entry_nbMusic");
        entryMaxBudget = (Entry) builder.getObject("entry_budget");
        buttonSubmit = (Button) builder.getObject("button_submit");
    }
}
