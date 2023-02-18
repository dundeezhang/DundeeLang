//
// Created by Dundee Zhang on 2023-02-16.
//

#include "Read.h"

void Read::readCode(std::string word) {
    DataTypes keyword;
    switch(string_to_case.contains(word)) {
        case 1:
            // int
            keyword.integer();
            break;
        case 2:
            // double
            break;
        case 3:
            // float
            break;
        case 4:
            // string
            break;
        case 5:
            // char
            break;
        case 6:
            // bool
            break;
        case 7:
            // switch
            break;
        case 8:
            // for
            break;
        case 9:
            // while
            break;
        case 10:
            // do
            break;
        case 11:
            // case
            break;
        case 12:
            // array
            break;
        case 13:
            // print
            break;
        case 14:
            // println
            break;
        case 15:
            // printf
            break;
        default:
            // other
            break;
    }
}
