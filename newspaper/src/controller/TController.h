#ifndef TCONTROLLER_H
#define TCONTROLLER_H
#include "../model/TNewspaper.h"
#include "../view/TView.h"

class TController {
   private:
    TNewspaper newsPaper;
    TView view;

   public:
    TController(){};
    ~TController(){};

    void eventProcess();
};

#endif