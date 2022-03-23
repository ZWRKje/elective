#ifndef TCARGO_H
#define TCARGO_H

class TCargo {
   private:
    float _weight;
    int _x;
    int _y;
    int _z;

   public:
    TCargo(float newWeight);
    ~TCargo();
    float getWeight();
    void setX(int newX);
    void setY(int newY);
    void setZ(int newZ);
    int getX();
    int getY();
    int getZ();
    void showPoz();
};

#endif