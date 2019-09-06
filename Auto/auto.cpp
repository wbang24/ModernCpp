//
//  main.cpp
//  ModernCpp
//
//  Created by Wayland Bang on 2019-09-05.
//  Copyright © 2019 Wayland Bang. All rights reserved.
//


//Some uses of auto

#include <iostream>
#include <vector>

//We can even have functions that start with auto
//Because it returns 42, it knows it is an int
auto meaningOfLife(){
    return 42;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::vector<std::string> fruit;
    
    fruit.push_back("Apples");
    fruit.push_back("Oranges");
    fruit.push_back("Bananas");
    fruit.push_back("Mangos");

    // instead of using the following for iterator it, we can use auto in place of it.
   // for(std::vector<std::string>::iterator it = fruit.begin();
    for(auto it = fruit.begin();
        it != fruit.end();
        it ++){
        std::cout << *it << std::endl;
    }
    
    std::cout << meaningOfLife()<< std::endl;
    
    return 0;
}
