#include<iostream>

int main(){

  
   int favorite_number;

    std::cout << "Enter your favorite number between 1 and 100:";

      std::cin >> favorite_number;

    std::cout << "Amazing !! That's my favorite number too!" << std::endl;
    /*เฉลย*/
     std::cout << "no really!!" << favorite_number << "is my favorite number!" << std::endl; 


/*
if(favorite_number >=1 && favorite_number <= 100){
    ใช้ได้นะ เขียนยาวไปหน่อย  
    std::cout << "no really!!";
    std::cout << favorite_number;
    std::cout << "is my favorite number!";
    


}
*/

    return 0;
}