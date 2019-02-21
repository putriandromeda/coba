//
// Created by Wenny on 2/20/2019.
//

#ifndef STRUCTDATABUKU01DAN02_MYLIB_H
#define STRUCTDATABUKU01DAN02_MYLIB_H
#include <iostream>
#include <string>
using namespace std;

bool EXIT();

struct Book
{
    string NameBook = "-", Author="-";
    unsigned int CodeBook=00, ReleaseDate=00, Price=00;
};

#endif //STRUCTDATABUKU01DAN02_MYLIB_H
