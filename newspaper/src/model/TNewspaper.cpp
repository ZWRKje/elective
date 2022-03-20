#include "TNewspaper.h"

#include <iostream>

#include "TAdv.h"
#include "TArticle.h"
#include "TJokes.h"

void TNewspaper::addJoke(string artist, int rating, string text) {
    TJokes* newJoke = new TJokes();
    newJoke->setText(text);
    newJoke->setArtist(artist);
    newJoke->setRating(rating);
    arrPublic.push_back(newJoke);
}

void TNewspaper::addArticle(string artist, string title, string text) {
    TArticle* newArticle = new TArticle();
    newArticle->setText(text);
    newArticle->setArtist(artist);
    newArticle->setTitle(title);
    arrPublic.push_back(newArticle);
}

void TNewspaper::addAdv(string text, string date) {
    TAdv* newAdv = new TAdv();
    newAdv->setText(text);
    newAdv->setDate(date);
    arrPublic.push_back(newAdv);
}

string TNewspaper::getText() {
    string mainText;
    for (const auto publication : arrPublic) {
        mainText += publication->getText();
    }
    return mainText;
}