#include "Surah.h"
#include <iostream>
#include<iomanip>
using namespace std;

Surah::Surah(){}
Surah::Surah(string surahName,string surahType,string imagePath)
    : name(surahName), type(surahType), path(imagePath) {}

Surah::Surah(string surahName):name(surahName){}

Surah::Surah(const Surah& surah)
{
    name = surah.name;
    type = surah.type;
    path = surah.path;
}
Surah& Surah::operator=(const Surah& surah)
{
    if (this != &surah) {
        name = surah.name;
        type = surah.type;
        path = surah.path;
    }
    return *this;
}
void Surah::setSurah(string surahName,string surahType,string imagePath)
{
    name = surahName;
    type = surahType;
    path = imagePath;
}
void Surah::setName(string surahName)
{
    name = surahName;
}
void Surah::setType(string surahType)
{
    type = surahType;
}
void Surah::setPath(string imagePath)
{
    path = imagePath;
}
string Surah::getName() const
{
    return name;
}
string Surah::getType() const
{
    return type;
}
string Surah::getPath() const
{
    return path;
}
bool Surah::operator==(Surah surah)
{
    return (this->name == surah.name);
}
ostream& operator<<(ostream& COUT , Surah surah) 
{
    cout << setw(20) << surah.name << setw(20) << surah.type << setw(20) << surah.path << endl;
    return COUT;
}
Surah::~Surah() {}
