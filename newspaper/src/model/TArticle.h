#ifndef TARTICLES_H
#define TARTICLES_H

#include <string>

#include "TPublication.h"

class TArticle : public TPublication {
   private:
    std::string _artist;
    std::string _title;

   public:
    TArticle(){};
    ~TArticle(){};
    void setArtist(std::string artist);
    void setTitle(std::string title);
    virtual std::string getText();
};

#endif  // !TARTICLES_H
