
/**

Pointers:
Are references.


Declare a pointer 

int *px;

px = &x;


Why do we use pointers? Powerful, 

Ans: functions are heaps, data types can be pointers for optimized programming.






 */
# include <iostream>

using namespace std;

int main(){

//Allocation 
    int *ages;
    int numbers;

     ages = new int[numbers];

     int *p = ages;
     p++;

     cout << *p;



    cout << p <<endl;
    cout << *p;

    return 0;
}


