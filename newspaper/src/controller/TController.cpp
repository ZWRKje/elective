#include "TController.h"

#include <iostream>
using namespace std;

void TController::eventProcess() {
    int IDProcess;
    string mainText;
    while (1) {
        IDProcess = view.showMenu();
        switch (IDProcess) {
            case 1: {
                newsPaper.addArticle(view.getArtist(), view.getTitle(),
                                     view.getText());
                break;
            }
            case 2: {
                newsPaper.addJoke(view.getArtist(), view.getRating(),
                                  view.getText());
                break;
            }
            case 3: {
                newsPaper.addAdv(view.getText(), view.getDate());
                break;
            }
            case 4: {
                mainText = newsPaper.getText();
                view.show(mainText);
                break;
            }
            case 5: {
                return;
            }
            default:
                break;
        }
    }
}