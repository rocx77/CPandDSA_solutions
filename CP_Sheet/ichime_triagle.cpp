#include<iostream>
#include<vector>
using namespace std;



// as the numbers are in a sorded order x<y<z and so for it to be a triangle x+y>z

// 
int main(){
    int t;
    cin>>t;
    vector<int> a(t),b(t),c(t),d(t);
    int x,y,z;
    int i =0;
    while(i<t){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        i++;
    }
    i=0;
    while(i<t){
        x = b[i];
        y = c[i];
        z = c[i];
        i++;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;

}