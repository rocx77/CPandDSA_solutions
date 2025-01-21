#include <bits/stdc++.h>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<cmath>
#include<string>
#include<sstream>
#include<limits>

using namespace std;

/*
we can create a class partner to store their greedy and patience level
and also the ratio of the two to impliment greedy method to find the partner with the highest ratio
and perform payout on them then update the ratios agin.
and then we can move on to the next partner with the highest ratio and perform payout on them
and keep doing this iteratively till we rach a point where ratio is zero or inf.
the partners is less than the greedy level of the partner 
in which case we take the most we can and leave till the patience level becomes zero.


make a class with greedy, patience and ratio as the attributes
and then make an array of objects of this class and find the max ratio
now take the first max element and and update its greed level and everyother parteners paitience level.
then calucalte the ratios again and find max again.

*/



class partner{
public:
    int greed;
    int patience;
    double ratio;
    partner(int g, int p){
        greed = g;
        patience = p;
        if(patience!=0){
            ratio = (double)greed/patience;
        }
        else{
            ratio = numeric_limits<double>::infinity();
        }
        // cout<<ratio<<" ";
    }
};


int Payout(vector<partner*> &partners, int n){
    int i=0;
    double max_ratio=0.00;
    int max_index= -1;
    for(i=0;i<n;i++){
        if(fabs(partners[i]->ratio) < numeric_limits<double>::epsilon()*1e-12 || partners[i]->ratio == numeric_limits<double>::infinity()){
            return 1;
        }
        if(partners[i]->ratio > max_ratio){
            max_ratio = partners[i]->ratio;
            max_index+=1;
        }
        partner temp(partners[i]->greed,partners[i]->patience-1);
        partners[i] = &temp;

    }
    // transform(partners.begin(),partners.end(),partners.begin(), ([](partner& p) -> partner{ 
    //     p.patience -= 1;
    //     p.ratio = (double)p.greed/p.patience;
    //     return p;}));

    partners[max_index]->greed--;
    partners[max_index]->patience++;
    partners[max_index]->ratio = (double)partners[max_index]->greed/partners[max_index]->patience;
    return 1+Payout(partners,n);

}

int main()
{
    int n;
    string g,p;
    cin>>n;
    cin.ignore();

    getline(cin,g);
    getline(cin,p);
    istringstream ssg(g);
    istringstream ssp(p);

    vector<partner*> partners;

    for(int i=0;i<n;i++){
        int g,p;
        ssg >> g;
        ssp >> p;
        partner temp(g,p);
        partners.push_back(&temp);
        // cout<<partners[i]->ratio<<" ";
    }

    // sort(partners.begin(),partners.end(), [](const partner &a, const partner &b) -> bool{
    //     return a.ratio > b.ratio;
    // });



    cout<< Payout(partners,n)<<endl;
    // for (auto i : partners){
    //     cout<<endl;
    //     cout<<i.ratio<<" ";
    //     cout<<i.greedy<<" ";
    //     cout<<i.patience<<endl;
    // }
    return 0;
}