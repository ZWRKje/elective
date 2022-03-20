#include "TView.h"

#include <iostream>
#include <string>

void TView::show(string text) { cout << text << endl; }

void TView::showAddArticleMenu() {
    cout << "write down:\n";
    cout << "artist: ";
    cin.ignore();
    getline(cin, _artist);
    cout << "title:";
    getline(cin, _title);
    cout << "text: ";
    getline(cin, _text);
}

void TView::showAddJokeMenu() {
    cout << "write down:\n";
    cout << "artist: ";
    cin.ignore();
    getline(cin, _artist);
    cout << "rating:";
    cin >> _rating;
    cout << "text: ";
    getline(cin, _text);
}

void TView::showAddAdvMenu() {
    cout << "write down:\n";
    cout << "text: ";
    cin.ignore();
    getline(cin, _text);
    cout << "data:";
    getline(cin, _data);
}
int TView::showMenu() {
    int action;
    cout << "choose action:\n";
    cout << "1 - add Article\n";
    cout << "2 - add Joke\n";
    cout << "3 - add Adv\n";
    cout << "4 - show newspaper\n";
    cout << "5 - exit\n";
    cin >> action;
    while ((action < 1) || (action > 5)) {
        cout << "Input Error";
        cin >> action;
    }
    switch (action) {
        case 1: {
            showAddArticleMenu();
            return 1;
        }
        case 2: {
            showAddJokeMenu();
            return 2;
        }
        case 3: {
            showAddAdvMenu();
            return 3;
        }
        case 4: {
            return 4;
        }
        case 5: {
            return 5;
        }
        default:
            break;
    }
    return action;
}

string TView::getTitle() { return _title; }

string TView::getText() { return _text; }

string TView::getArtist() { return _artist; }

int TView::getRating() { return _rating; }

string TView::getDate() { return _data; }