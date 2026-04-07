#include <iostream>
#include <vector>


using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int b[m][n];
    int a[m][n];
    vector<int> row(m,1);
    vector<int> col(n,1);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
            if(b[i][j] == 0){
                row[i] = 0;
                col[j] = 0;
            }
            a[i][j] = 1;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i][j] == 1 && (row[i]==0 && col[j]==0)){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    
    // for(int i=0;i<m;i++){
    //     cout<<row[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<col[i]<<" ";
    // }
    // cout<<endl;

    cout<<"YES"<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]==0 || col[j]==0){
                a[i][j] = 0;
            }
            cout<<a[i][j]<<" ";
        }    
        cout<<endl;
    }
    

    return 0;
}