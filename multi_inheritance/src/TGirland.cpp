#include "../headers/TGirland.h"

void TGirland::addLight(ILightable *t) {
    this->objects.push_back(t);
}

void TGirland::light() {
        for (auto &it : objects) {
            it->light();
        }
    }