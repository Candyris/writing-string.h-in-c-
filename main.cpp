#include "cString.hpp"
#include <string.h>
#include <iostream>

    void print(const char * s){
        for(int i = 0 ; i<candy::Strlen(s); i++)
            std::cout<<*(s+i);
        std::cout<<std::endl;
    }

int main(){
    const char *place1 = "NewYork";
    const char *place2 = "london";
    const char *place3 = "NewYork";
    const char *fullName = "Candyris";
    const char *Name = "Candy";
   
    //const char *greeting  = candy::Strcat("good","morning");
    //sorry but i am not mange this to complie in without const ptr
    std::cout<< candy::Strnlen(place1,2)<<std::endl;
    std::cout<<candy::Strcmp(place1,place2)<<std::endl;
    std::cout<<candy::Strcmp(place1,place3)<<std::endl;
    std::cout<<candy::Strncmp(Name,fullName,8)<<std::endl;
    std::cout<<strncmp(Name,fullName,8)<<std::endl;
    std::cout<<candy::Strstr("Hello","e")<<std::endl;

    
    return 0;
}
