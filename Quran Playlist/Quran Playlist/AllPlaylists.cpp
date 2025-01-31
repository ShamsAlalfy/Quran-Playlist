#include"AllPlaylists.h"
#include <iomanip>
void AllPlaylists::AddPlaylist(Playlist playlist)
{
	all.insertAtEnd(playlist);
}
void AllPlaylists::DisplayPlaylists()
{
	cout << left << setw(4) << "ID" << setw(20) << "Playlist" << endl;
	cout << "----------------------------------------------------------" << endl;
	int id = 1;
	Node<Playlist>* current = all.getHead();
	while (current)
	{
		cout << setw(4) << id << setw(20) << current->data.getPlaylistName() << endl;
		id++;
		current = current->next;
	}
	cout << endl;
}

void AllPlaylists::DisplayPlaylistsWithSurahs()
{
	Node<Playlist>* current = all.getHead();
	while (current)
	{
		current->data.DisplayPlaylist();
		current = current->next;
	}
}
void AllPlaylists::DisplaySurahFromSpecificPlaylist()
{
	DisplayPlaylists();
	cout << "Which Playlist ?";
	string name;
	getline(cin, name);
	Playlist playlist(name);
	all.search(playlist).DisplayPlaylist();
}
void AllPlaylists::PlaySurahFromSpecificPlaylist()
{
	DisplayPlaylists();
	cout << "Which Playlist ?";
	string name;
	getline(cin, name);
	Playlist playlist(name);
	all.search(playlist).PlaySurah();
}
void AllPlaylists::RemovePlaylist(string name)
{
	Playlist playlist(name);
	Playlist play = all.search(playlist);
	all.deleteElement(play);
}
DLL<Playlist>& AllPlaylists::getPlaylists()
{
	return all;
}
AllPlaylists::~AllPlaylists(){}