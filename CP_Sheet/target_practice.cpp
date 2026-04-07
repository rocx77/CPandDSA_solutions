#include<iostream>
#include<vector>


using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        // vector<vector<char>> tar(10,vector<char> (10));
        char tar;
        int score = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>tar;
                if(tar == 'X'){
                    if(i<=5 and i>=4 and j<=5 and j>=4){
                        score+=5;
                    }
                    else if(i<=6 and i>=3 and j<=6 and j>=3){
                        score += 4;
                    }
                    else if(i<=7 and i>=2 and j<=7 and j>=2){
                        score += 3;
                    }
                    else if(i<=8 and i>=1 and j<=8 and j>=1){
                        score += 2;
                    }
                    else{
                        score += 1;
                    }

                }
            }
        }

        cout<<score<<endl;

    }
    return 0;
}