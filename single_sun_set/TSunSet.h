#pragma once

class TSunSet {
   public:
    static TSunSet* createInstance();
    static int getCount();

   private:
    static TSunSet* _instatcePtr;
    static int _count;
    TSunSet();
    ~TSunSet();
};
