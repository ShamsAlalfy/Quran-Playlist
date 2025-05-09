#  Quran Playlist Manager

 A C++ application that implements a fully functional **Quran Playlist Manager** using a custom `Doubly Linked List (DLL)` data structure. The program allows you to create, manage, and play Quran playlists efficiently with features for:

- **Adding**, **searching**, **deleting**, and **updating** Surahs
- Playing Surahs with audio controls (Play, Pause, Resume, Next, Previous)
- Saving and Loading playlists from files
- Displaying all playlists and their contents

---

##  **Description:**

The **Quran Playlist Manager** is designed to help you efficiently store, organize, and listen to Quranic Surahs. Built entirely in `C++` with Object-Oriented Programming principles, it utilizes a custom-built `Doubly Linked List (DLL)` data structure for optimal memory usage and fast traversal in both directions.
You can easily create multiple playlists, add Surahs to them, reorder the Surahs, and play them using audio controls. Playlists can be saved and loaded from external files, allowing for persistent storage.

#### This project is perfect for understanding:

* Custom Data Structures (Doubly Linked List)
* Object-Oriented Design Patterns
* File I/O Operations in C++
* Audio Playback in C++ with the `irrKlang` library

---

##  **Features:**

* **Add New Playlist:** Create new Quranic playlists and name them.
* **Add Surah to Playlist:** Store detailed information for each Surah (Name, Type, Path).
* **Remove Surah:** Delete a specific Surah from any playlist.
* **Reorder Surahs:** Change the position of Surahs within a playlist.
* **Search and Display:** Easily find Surahs by name and display them.
* **Play Surah:** Listen to Surahs with interactive audio controls:

  * **Up Arrow:** Pause playback
  * **Down Arrow:** Resume playback
  * **Right Arrow:** Next Surah
  * **Left Arrow:** Previous Surah
  * **Q:** Quit playback
* **Save and Load Playlists:** Store playlists to a file and load them back anytime.
* **Remove Playlist:** Delete an entire playlist from memory.

---


##  **Used Libraries**

- **\<irrKlang.h>**

  * Provides functionalities for playing audio files.
  * Used to play, pause, resume, and stop Quranic recitations.
-  **\<iostream>**

   Handles input and output operations.
* **\<iomanip>**

  * Used for formatted output in display tables.
* **\<conio.h>**

  * Provides functions like `_getch()` to handle keyboard inputs directly without pressing "Enter".
* **\<string>**

  * Facilitates string manipulations for names, types, and file paths.
* **\<ostream>**

  * Allows object streaming to output streams.

---

##  **Requirements:**

* C++ Compiler (e.g., g++)
* Basic understanding of Object-Oriented Programming (OOP)
* irrKlang library for audio playback (`.dll` or `.so` files may be required for execution)

---



##  **Implementation Details:**

* **Doubly Linked List (DLL):** Custom implementation with navigation in both directions.
* **Classes:**

  * `Node`: Represents each node in the linked list.
  * `DLL`: Manages the linked list structure.
  * `Surah`: Holds information for each Surah.
  * `Playlist`: Manages a collection of Surahs.
  * `AllPlaylists`: Manages all playlists and global operations.
* **File Handling:** Data is saved and loaded using file I/O.
* **Audio Playback:** Utilizes the irrKlang library to manage Quran recitations.

---

## **Complexity Analysis:**

| Operation            | Time Complexity | Space Complexity |
| -------------------- | --------------- | ---------------- |
| Insertion (Append)   | O(1)            | O(n)             |
| Deletion             | O(n)            | O(n)             |
| Search (By Name)     | O(n)            | O(1)             |
| Resize (Linked List) | O(1)            | O(n)             |
| Reverse Traversal    | O(n)            | O(1)             |

---


