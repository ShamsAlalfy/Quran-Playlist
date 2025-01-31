#pragma once
#include <string>
#include<ostream>
using namespace std;

class Surah
{
private:
    string name;
    string type;
    string path;
public:

    Surah();
    Surah(string,string,string);
    Surah(string);
    Surah(const Surah&);
    Surah& operator=(const Surah&);
    void setSurah(string,string,string);
    void setName(string);
    void setType(string);
    void setPath(string);
    string getName() const;
    string getType() const;
    string getPath() const;
    bool operator==(Surah);
    friend ostream& operator<<(ostream&,Surah);
    ~Surah();
};


