#include <iostream>

using namespace std;

int main(void)
{
    int a[] = {2,2}; //supports multiple indirection
                     //(pointer to pointer)
    
    int* pa;         //initialization is optional
    pa = a;
    
    
    int b = 3;
    int* pb = & b;
    
    //pa += 3;      //implicit indirection not allowed
    *pa += 3;       //Explicit indirection allowed
    
    cout << "a * b: " << *pa * *pb << endl;
    cout << "a: " << *pa << endl;
    cout << "b: " << *pb << endl;
}
