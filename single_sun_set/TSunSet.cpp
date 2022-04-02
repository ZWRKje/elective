#include "TSunSet.h"

TSunSet* TSunSet::_instatcePtr = nullptr;

int TSunSet::_count = 0;

TSunSet::TSunSet() { _count++; }

TSunSet::~TSunSet() {}

TSunSet* TSunSet::createInstance() {
    if (!_instatcePtr) {
        _instatcePtr = new TSunSet();
        return _instatcePtr;
    }
}
int TSunSet::getCount() { return _count; }