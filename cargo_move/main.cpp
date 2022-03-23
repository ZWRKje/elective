#include <iostream>
#include <locale>

#include "./header/TForklift.h"

int main() {
    std::setlocale(LC_ALL, "ru");
    TCargo car(50);
    TCargo fridge(10);
    TCargo plane(500);

    std::cout << "Координаты грузов до перемещения: \n";
    car.showPoz();
    fridge.showPoz();
    plane.showPoz();

    TForklift worker;
    worker.move(plane, 1, 0, 1);
    worker.move(car, 5, 5, 0);
    worker.move(fridge, 6, 4, 3);

    std::cout << "Координаты грузов после перемещения: \n";
    car.showPoz();
    std::cout << "\t*****\n";
    fridge.showPoz();
    std::cout << "\t*****\n";
    plane.showPoz();

    return 0;
}