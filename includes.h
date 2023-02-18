//
// Created by Dundee Zhang on 2023-02-16.
//
#ifndef DUNDEELANG_INCLUDES_H
#define DUNDEELANG_INCLUDES_H

#include <iostream>
#include <cstdio>
#include <vector>
#include <ctime>
#include <queue>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <unordered_map>
#include <string>
#include <sstream>

#include "Libraries/Math.h"
#include "Interpreter/Run.h"
#include "Interpreter/Loops.h"
#include "Interpreter/Read.h"
#include "Interpreter/DataTypes.h"

std::string keywords[] = {
        "int",
        "double",
        "float",
        "string",
        "char",
        "bool",
        "switch",
        "for",
        "while",
        "do",
        "case",
        "array",
        "print",
        "println",
        "printf",
};

const static std::unordered_map<std::string,int> string_to_case{
        {"int",1},
        {"double",2},
        {"float",3},
        {"string",4},
        {"char",5},
        {"bool",6},
        {"switch",7},
        {"for",8},
        {"while",9},
        {"do",10},
        {"case",11},
        {"array",12},
        {"print",13},
        {"println",14},
        {"printf",15},

};


#endif //DUNDEELANG_INCLUDES_H
