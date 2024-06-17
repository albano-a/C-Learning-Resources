#include <iostream>
#include <vector>
#include <string>

/**
 * @brief An example program.
 * 
 * 
 * @return Returns 0 when execution
 *  */ 
int main(int argc, char const *argv[])
{
    std::vector<std::string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const std::string& word : msg){
        std::cout << word << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
