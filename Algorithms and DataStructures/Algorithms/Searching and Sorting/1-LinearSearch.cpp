/*
Linear search
difficulty: basic
complexity: 1) O(n)
			2) O(1) when found else O(n/2) when not found

Description:
- search given element "x" in array
*/

#include <bits\stdc++.h>
using namespace std;

// 1)
int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
// 2)
void search2(vector<int> arr, int search_Element)
{
    int left = 0;
    int length = arr.size();
    int position = -1;
      int right = length - 1;
       
    // Run loop from 0 to right
    for(left = 0; left <= right;)
    {
         
        // If search_element is found with
        // left variable
        if (arr[left] == search_Element)
        {
             
            position = left;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << left + 1 << " Attempt\n";
                
            break;
        }
       
        // If search_element is found with
        // right variable
        if (arr[right] == search_Element)
        {
            position = right;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << length - right << " Attempt\n";
                
            break;
        }
        left++;
        right--;
    }
 
    // If element not found
    if (position == -1)
        cout << "Not found in Array with "
             << left << " Attempt\n";
}

int main() {
	// function call 1)
	int arr[] = { 2, 3, 4, 10, 40 };
    int x = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
   

    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array\n"
        : cout << "Element is present at index " << result << endl;;

    // function call 2)
    vector<int> arr2{ 1, 2, 3, 4, 5 };
    int search_element = 3;

    search2(arr2, search_element);
    return 0;   
}