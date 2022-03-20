#include "TArticle.h"
using namespace std;

void TArticle::setArtist(std::string artist) { _artist = artist; }

void TArticle::setTitle(std::string title) { _title = title; }

string TArticle::getText() {
    string artContent;
    artContent = "\tARTICLE \n*****\nartist:  " + _artist + "\ntitle: " + _title +
                 "\ntext: " + text + "\n*****\n";
    return (artContent);
}