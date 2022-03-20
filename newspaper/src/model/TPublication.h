#ifndef TPUBLICATION_H
#define TPUBLICATION_H
// #include  "TNewspaper.h"
#include <string>

class TPublication {
   protected:
    std::string text;
   public:
    TPublication(){};
    ~TPublication(){};
    void setText(std::string str);
    virtual std::string getText() = 0;

};

#endif