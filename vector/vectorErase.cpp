// Sample Input

// 6
// 1 4 6 2 8 9
// 2
// 2 4

// Sample Output

// 3
// 1 8 9

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num,range;
    vector<int>arr;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    } 
    cin>>range;

    vector<int> r(range); // Initialize vector with size 'range' to avoid out of bounds access.
    for (int i = 0; i < range; i++) {
        cin >> r[i];
    }

    // Correct way to erase elements within a range:
    if (r[0] >= 0 && r[1] < arr.size() && r[0] <= r[1]) { //Check if indices are valid
        arr.erase(arr.begin() + r[0], arr.begin() + r[1] + 1); // +1 because end is exclusive
    } else {
        cerr << "Invalid range for erasing." << endl;
    }
    
    for(int ele: arr){
        cout<<ele<<" ";
    }
    return 0;
}
