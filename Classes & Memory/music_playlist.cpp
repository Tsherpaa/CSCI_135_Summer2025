#include <iostream>
using namespace std;

class MusicPlaylist {
private:
    string name;
    int* totalSongs;
    string* firstSong;

public:
     /**
     * Constructor
     * Initializes the playlist with a name.
     * - Allocate memory for totalSongs and initialize it to 0.
     * - Set firstSong pointer to nullptr.
     */
    MusicPlaylist(string playlistName){
        name = playlistName;
        totalSongs = new int(0); 
        firstSong = nullptr;
    }
    /**
     * addFirstSong
     * Adds the first song to the playlist.
     * - If firstSong is null, allocate memory and assign the song title.
     * - If already allocated, update the song title.
     * - Increase totalSongs by 1.
     */
    void addFirstSong(string songTitle) {

        if (firstSong == nullptr) {
            firstSong = new string(songTitle);

        }
        else {
            *firstSong = songTitle;
        }
        (*totalSongs)++;
    }
    /**
     * printInfo
     * Prints the playlist name, total number of songs, and first song title.
     * - Be sure to check if firstSong is not nullptr before printing it.
     */
    void printInfo() {
        cout << "Playlist name: " << name << endl;
        cout << "Total songs: " << *totalSongs << endl;
        if (firstSong == nullptr) {
            cout << "No songs in playlist";
        }
        else {
            cout << "First song title: " << *firstSong << endl;
        }
    }
    /**
     * Destructor
     * - Clean up dynamically allocated memory for totalSongs and firstSong.
     * - Set pointers to nullptr after deleting.
     */
    ~MusicPlaylist(){
        delete totalSongs;
        delete firstSong;
        totalSongs = nullptr;
        firstSong = nullptr;
    }
};

int main() {
    // TODO: Create a MusicPlaylist object using new
    // Example: MusicPlaylist* myPlaylist = new MusicPlaylist("My Playlist");
    MusicPlaylist* myPlaylist = new MusicPlaylist("My Playlist");
    // TODO: Use -> to call addFirstSong() with a song name
    myPlaylist->addFirstSong("Toxic");
    // TODO: Call printInfo() to show the playlist details
    myPlaylist->printInfo();
    // TODO: Don't forget to call delete on your pointer to clean up memory
    delete myPlaylist;

    return 0;
}