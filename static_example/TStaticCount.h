#pragma once

class TStaticCount {
   private:
    static int _count;
    int a = 0;

   public:
    static int getCount();
    TStaticCount();
    ~TStaticCount();
    void pritnCount();
};
