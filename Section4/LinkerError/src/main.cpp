#include<iostream>

extern int x;

int main(){

/* extern int  x พาเป็นเรื่อง (main .0 กับ iostream อยู่คนละที่แล้วลิ้งลงไปเป็น a.exe แต่มีปัญหาตรงที่ a อยู่ใน main.o เหมือนกับว่า iostream หาไม่เจอ งงมั้ย )  */
    std::cout << "Hello World" << std::endl;

    std::cout << x;

    return  0;
}