#ifndef TVIEW_H
#define TVIEW_H
#include <string>
using namespace std;

class TView {
   private:
    string _title;
    string _data;
    string _artist;
    string _text;
    int _rating;

   public:
    TView(){};
    ~TView(){};

    void show(string text);
    void showAddArticleMenu();
    void showAddJokeMenu();
    void showAddAdvMenu();
    int showMenu();
    string getTitle();
    string getArtist();
    string getText();
    int getRating();
    string getDate();
};

#endif