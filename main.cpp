#include "includes.h"



int main(int argc, char** argv) {

    if(argc < 1) {
        std::cout << "Invalid Arguments" << std::endl;
        return 2;
    }

    std::string commandString = argv[1];
    char command = commandString[0];
    std::string fileName = argv[2];
    fileName += ".dz";

    Run program;

    switch(command) {
        case 'r':
            program.run(fileName);
            // run
            break;
        case 'c':
            program.credits();
            // compile
            break;
        case 'v':
            // version
            break;
        default:
            std::cout << "Invalid Command" << std::endl;
    }
    return 0;
}
