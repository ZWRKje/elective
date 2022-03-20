#include "TJokes.h"

#include <stdlib.h>
using namespace std;

void TJokes::setArtist(std::string artist) { _artist = artist; }

void TJokes::setRating(int rating) { _rating = rating; }

string TJokes::getText() {
    string jokeContent;
    jokeContent = "\tJoke \n artist - " + _artist + "\nrating: " + to_string(_rating) +
                  "\ntext: " + text;
    return (jokeContent);
}
