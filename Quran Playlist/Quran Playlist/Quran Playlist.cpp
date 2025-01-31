#include <iostream>
#include <conio.h>
#include"mainFunctions.h"
using namespace std;

int main()
{
    AllPlaylists playlists;
    cout << "\t\t\t\t\t\t\t\tQuran Playlist Manager\n" << endl;
    while (true)
    {
        ShowMenu();
        cout << "Enter your choice : ";
        int choice;
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            AddPlaylist(playlists);
            break;
        case 2:
            AddSurahtoExistingPlaylist(playlists);
            break;
        case 3:
            RemoveSurah(playlists);
            break;
        case 4:
            UpdateOrder(playlists);
            break;
        case 5:
            DisplayPlaylists(playlists);
            break;
        case 6:
            DisplayPlaylistsSurah(playlists);
            break;
        case 7:
            DisplaySurahFromSpecificPlaylist(playlists);
            break;
        case 8:
            PlaySurahFromPlaylist(playlists);
            break;
        case 9:
            SavePlaylist(playlists);
            break;
        case 10:
            Load(playlists);
            break;
        case 11:
            RemovePlaylist(playlists);
            break;
        case 12:
            system("cls");
            return 0;
        default:
            cout << "Invalid Choice :(  Please Try Again :)" << endl << endl;
        }
    }
    return 0;
}