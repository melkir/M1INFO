package model;

public class AgentSeeker extends AbstractModel {
    // ComboBoxText comboBoxTextGenre;
    String artist, album, minNote, maxPrice, nbMusic, maxBudget;

    public String getArtist() {
        return artist;
    }

    public void setArtist(String artist) {
        this.artist = artist;
    }

    public String getAlbum() {
        return album;
    }

    public void setAlbum(String album) {
        this.album = album;
    }

    public String getMinNote() {
        return minNote;
    }

    public void setMinNote(String minNote) {
        this.minNote = minNote;
    }

    public String getMaxPrice() {
        return maxPrice;
    }

    public void setMaxPrice(String maxPrice) {
        this.maxPrice = maxPrice;
    }

    public String getNbMusic() {
        return nbMusic;
    }

    public void setNbMusic(String nbMusic) {
        this.nbMusic = nbMusic;
    }

    public String getMaxBudget() {
        return maxBudget;
    }

    public void setMaxBudget(String maxBudget) {
        this.maxBudget = maxBudget;
    }

    public void reset() {
        this.artist = "";
        this.album = "";
        this.maxPrice = "";
        this.nbMusic = "";
        this.maxBudget = "";
        notifyObserver(artist);
        notifyObserver(album);
        notifyObserver(maxPrice);
        notifyObserver(nbMusic);
        notifyObserver(maxBudget);
    }
}
