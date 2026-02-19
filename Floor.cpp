#include <iostream>
using namespace std;

int main()
{
    int floor; 
    int actual_floor;
    cout <<  "enter the desired floor: " << endl;
    cin >> floor;
    if (floor > 13) 
    {   
	    actual_floor = floor - 1; 
    }
    else
    {
	    actual_floor = floor;
    }

    cout << floor;
return 0;
}   
