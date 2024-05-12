#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    
    if (argc != 2){

        std::cerr << "Error: Invalid input." << std::endl;
        return 1;
    
    }
    std::string filename = argv[1];
    
    std::ifstream file(filename);

    if (file.is_open()){

        std::string line;

        while(getline(file,line)){
            std::cout << line << std::endl;
        }

        file.close();
        return 0;
    }
    else {

    std::cerr << "Failed to open the file." << filename << std::endl;
    return 1;

    }

}