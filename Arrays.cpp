/*  Array:- it is a collection of items stored in contigious memory locations
            and those items are homogeneous in nature
*/

#include <iostream>
using namespace std;

int main(){
    int arr1[5];
    int arr2[10] = {1,2,3,4,6,8};
    int arr3[] = {2,4,6,8};
    cout << sizeof(arr1)<<endl;
    cout << sizeof(arr2)<<endl;
    cout << sizeof(arr3)<<endl;

    return 0;
}
/*  Index of array start from 0
    size of array is always fixed
    getting contigious memory location is impossible
    integer is a 2 byte element hense it requires 2 memory location to store one integer
*/