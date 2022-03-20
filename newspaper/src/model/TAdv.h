#ifndef TADV_H
#define TADV_H

#include <string>

#include "TPublication.h"

class TAdv : public TPublication {
   private:
    std::string _date;
    std::string _text;

   public:
    TAdv(){};
    ~TAdv(){};
    void setDate(std::string date);
    void setText(std::string text);
    std::string getText();
};

#endif  // !TADV_H
