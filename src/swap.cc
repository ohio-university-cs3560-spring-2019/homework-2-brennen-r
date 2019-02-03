/* Name: Brennen Rizer
   Date: January 28, 2019
   Assignment: Homework 1 - swap.cc
*/

#include "../include/swap.h"
#include <string>
using namespace std;

void swap(string &s, const string &find, const string &replace) {
  for(size_t index = 0; index != '\n'; index += replace.length()) {
    //finds the substring to replace
    index = s.find(find, index);
    if(index == string::npos) break;

    //replace by erasing find and insterting replace
    s.erase(index, find.length());
    s.insert(index, replace);
  }
}
