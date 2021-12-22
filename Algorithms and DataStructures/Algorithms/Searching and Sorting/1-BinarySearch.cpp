/*
Binary search
difficulty: Easy
Complexity: O(Log n)
			- 1) Recursive approach
			- 2) Iterative approach

Description:
- Given sorted array of n elements 
- Repeatedly halfing the search interval in half
- 
*/
#include <bits\stdc++.h>
using namespace std;

// 1)
const int N = 1e6 +4;
int a[N] = {1,2,3,4,5,6,7,8,9,10,11};
int n = 11;//sizeof(a) / sizeof(a[0]);
int k = 11;
// 1)
bool check(int dig) {
    //element at dig position in array
    int ele=a[dig];
 
    /*	if k is less than element at dig position
    	then we need to bring our higher ending to dig
    	and then continue further
    */
    if(k<=ele) {
        return 1;
    } else {
    	return 0;
    }
}
// 1)
void binsrch(int lo,int hi) {
    while(lo<hi) {
        int mid= lo + (hi - lo)/2;
        if(check(mid)) {
            hi=mid;
        } else {
            lo=mid+1;
        }
    }
    //if a[lo] is k
    if(a[lo]==k) {
        cout<<"Element found at index "<<lo << endl;;// 0 based indexing
    } else {
        cout<<"Element doesnt exist in array" << endl;;//element was not in our array
    }
}

// 2)
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    // if we reach here, then element was
    // not present
    return -1;
}
 

int main() {
	// 1)
	binsrch(0,n);

	// 2)
	int arr[] = { 2, 3, 4, 10, 40 };
    int search = 10;
    int s = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, s - 1, search);
    (result == -1) ? cout << "Element is not present in array\n"
                   : cout << "Element is present at index " << result << "\n";
	return 0;   
}