/* Name: Brennen Rizer
   Date: January 28, 2019
   Assignment: Homework 1 - prog1.cc
*/

#include "../include/swap.h"
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  string s;
  int count;

  while(count < 15) {
    getline(cin, s);
    swap(s, argv[1], argv[2]);
    cout << s << endl;
    ++count;
  }

  return 0;
}
