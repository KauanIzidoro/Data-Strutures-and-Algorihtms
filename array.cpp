#include <bits/stdc++.h>
using namespace std;

/*
     Arrays:
     
     -> Typically have a fixed size;
     -> Allow random acces, and time complexity of O(1) for lookup;
     -> All elements are stored one after another in memory efficient caches;

*/

// Simple example:
int main(){
    int arr[5] = {10,20,30,40,50};
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}