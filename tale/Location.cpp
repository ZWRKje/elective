#include "Location.hpp"

#include <string>

std::string getLocationStr(Location l) {
    switch (l) {
        case HOME:
            return "дом";
            break;
        case FOREST:
            return "лес";
            break;
        case PORCH:
            return "порог";
            break;
        case ROOM:
            return "комната";
            break;
        case STOMACH:
            return "брюхо";
            break;
        case ROAD:
            return "дорога";
            break;
        default:
            return "Неизвестное местоположение";
            break;
    }
}

std::ostream& operator<<(std::ostream& os, const Location& obj) {
    os << getLocationStr(obj);
    return os;
}
