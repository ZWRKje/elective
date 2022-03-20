#ifndef TNEWS_H
#define TNEWS_H
#include <string>
#include <vector>

#include "TPublication.h"
using namespace std;

class TNewspaper {
   private:
    vector<TPublication *> arrPublic;

   public:
    TNewspaper(){};
    ~TNewspaper(){};
    void addJoke(string artist, int rating, string text);
    void addArticle(string artist, string title, string text);
    void addAdv(string text, string date);
    string getText();
};

#endif