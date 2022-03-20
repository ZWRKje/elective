#include "TAdv.h"
using namespace std;

void TAdv::setDate(std::string date) { _date = date; }

void TAdv::setText(std::string text) { _text = text; }

string TAdv::getText() {
    string text;
    text = "\tADVERTISING\n*****\ndate:  " + _date + "\n text:  " + _text + "\n*****\n";
    return (text);
}