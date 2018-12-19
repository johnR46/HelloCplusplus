
/*Explicitly using namespaces
 #include <iostream>
int main(int argc,char *argv[])
{

    int favorite_number;
     พวก std เป็น namespaces

    std::cout << "Enter your favorite number between 1 and 100:";

    std::cin >> favorite_number;

    std::cout << "Amazing !! That's my favorite number too!" << std::endl;

    std::cout << "no really!!" << favorite_number << "is my favorite number!" << std::endl;

    return 0;
}
*/

// Using namespaces directive
#include <iostream>
//using namespace std; //Use the entire std namespaces
/* Qualified Using namespace variant */
using  std::cout; 
using  std::cin; 
using  std::endl; 

int main(int argc, char *argv[])
{

    int favorite_number;

    cout << "Enter your favorite number between 1 and 100:";

    cin >> favorite_number;

    cout << "Amazing !! That's my favorite number too!" << std::endl;

    cout << "no really!!" << favorite_number << "is my favorite number!" << std::endl;

    return 0;
}
