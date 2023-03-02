#include <iostream>
int* magic(void){return new int[100];}
int main(void){int * k = magic(); std::cout<<"hit"<<std::endl; return 0;}
