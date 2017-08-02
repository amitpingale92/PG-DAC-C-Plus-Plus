#include <iostream>

using namespace std;

int main(void)
{
    int a = 2;
    //int a[] = {2,2};
    
    
    //int& ra = a;     // Doesn't support multiple indirection
                       //(pointer to reference)
    
    //int& ra = a[1];  //allowed
    
    
    int& ra = a;        //initialization is compulsary

    int b = 3;
    int& rb = b;
    
    //a += 3;
    
    int c = 7;
    ra = c;               //Support implicit indirection
                          // As ra = c ,Therefore a = c
    
    //&ra = c;            //Doesn't support reinitialization
    
    cout << "a * b: "<< ra * rb <<endl;
    cout << "a: "<< ra <<endl; //Doesn't return address
    cout << "b: "<< rb <<endl; //Doesn't return address
    
}