#ifndef TJOKES_H
#define TJOKES_H

#include <string>

#include "TPublication.h"

class TJokes : public TPublication {
   private:
    std::string _artist;
    int _rating;

   public:
    TJokes(){};
    ~TJokes(){};
    void setArtist(std::string artist);
    void setRating(int rating);
    std::string getText();
};

#endif // !TJOKES_H 
