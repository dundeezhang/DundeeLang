//
// Created by Dundee Zhang on 2023-02-16.
//

#include "Run.h"

void Run::credits() {
    printf("Created by: Dundee Zhang");
}

void Run::run(std::string name) {
    std::ofstream code(name);
    std::string lines;

    std::vector<std::string> tokens;

    if(code) {
        std::ostringstream ss;
        ss << code.rdbuf();
        lines = ss.str();
    }

    std::stringstream check1(lines);

    std::string intermediate;

    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }

    // Printing the token vector
    for(int i = 0; i < tokens.size(); i++)
        cout << tokens[i] << '\n';

}
