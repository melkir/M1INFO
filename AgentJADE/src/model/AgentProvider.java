package model;

public class AgentProvider {
    // ComboBoxText comboBoxTextGenre;
     String artist, name, price, note, musicAvailableList, musicSoldList, searchMusic;

    public String getSearchMusic() {
        return searchMusic;
    }

    public void setSearchMusic(String searchMusic) {
        this.searchMusic = searchMusic;
    }

    public String getArtist() {
        return artist;
    }

    public void setArtist(String artist) {
        this.artist = artist;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getPrice() {
        return price;
    }

    public void setPrice(String price) {
        this.price = price;
    }

    public String getNote() {
        return note;
    }

    public void setNote(String note) {
        this.note = note;
    }

    public String getMusicAvailableList() {
        return musicAvailableList;
    }

    public void setMusicAvailableList(String musicAvailableList) {
        this.musicAvailableList = musicAvailableList;
    }

    public String getMusicSoldList() {
        return musicSoldList;
    }

    public void setMusicSoldList(String musicSoldList) {
        this.musicSoldList = musicSoldList;
    }
    
}
