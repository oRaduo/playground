#include <iostream>
#include"00_Preprocessor_Directives.hpp"

using namespace std;
const int VAR = 3;
int foo_1()
{
int nr1;
int nr2;
nr1 = 5;
cout << "nr1 = " << nr1
<< endl;
cout << "integer: ";
cin >> nr2; 
cout << endl; 
cout << "nr2 = " << nr2
<< endl; 
nr1 = nr1 + VAR + 3 * nr2;
cout << "The new value of "
<< "nr1 = " << nr1 << endl;
return 0; 
} 
