#pragma once
#include "AllPlaylists.h"
void ShowMenu();
void AddPlaylist(AllPlaylists&);
void AddSurahtoExistingPlaylist(AllPlaylists&);
void RemoveSurah(AllPlaylists&);
void UpdateOrder(AllPlaylists&);
void DisplayPlaylists(AllPlaylists&);
void DisplayPlaylistsSurah(AllPlaylists&);
void DisplaySurahFromSpecificPlaylist(AllPlaylists& all);
void PlaySurahFromPlaylist(AllPlaylists&);
void SavePlaylist(AllPlaylists&);
void Load(AllPlaylists&);
void RemovePlaylist(AllPlaylists&);
int toInt(string);