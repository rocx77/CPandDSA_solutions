// take a range from the user and perform XOR operation with a value given by the use
// return the resultant array after all the queries are processed

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int l=0;    // start index
    int r=0;    // end index
    int v=0;  // value to opperate with
    int n=0;  // number of queries
    int arr[] = {1,3,2,0,7,5,3,1,-1,-3,0,9};
    int diso[12];
    diso[0] = arr[0];
    for(int j=1;j<12;j++){
        
    }

    cout<<"Enter the number of queries"<<endl;
    cin>>n;
    while(n--){
        cout<<"enter starting and ending index less then 12 and the value"<<endl;
        cin>>l;
        cin>>r;
        cin>>v;
        arr[l] ^= v;
        arr[r] ^= v;
    }
    for(int i=1;i<12;i++){

    }
    return 0;
}