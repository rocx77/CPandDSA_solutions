#include <iostream>
#include <algorithm>
#include <map>
#include <vector>


using namespace std;

/*
You are given a graph of N nodes and M edges,
and you have to remove K edges from the matrix to maximise 
the Score of the matrix.
The score is defined as the sum of score of all the nodes
and score of a node is the number of other nodes that is 
possible to traverse from the node via any viable path of the graph.
so you have to remove K edges such that the score is the maximum possible.
*/


int countNodes(vector<int> *adjlist,vector<int>& vis, int node,int count){
    count++;
    vis[node] = 1;
    for(int n:adjlist[node]){
        if(vis[n] != 1){
            count = countNodes(adjlist,vis,n,count);
        }
    }
    return count;
}

int graphScore(vector<int> *adjlist,int N){
    int score = 0;
    vector<int> vis(N);
    for(int i=0;i<N;i++){
        if(vis[i]!=1){
            int count = countNodes(adjlist,vis,i,0);
            score += (count)*(count-1);
        }
    }

    return score;
}


int main() {
    int N;
    int M;
    int K;
    cin>>N>>M>>K;
    if(N==0 || M==0){
        cout<<0;
        return 0;
    }
    if(M<=K){
        cout<<0;
        return 0;
    }
    vector<int> adjlist[N];
    int j=0;
    vector<pair<int,int>> edges;
    while(j<M){
        j++;
        int v1,v2;
        cin>>v1>>v2;
        adjlist[v1].push_back(v2);
        adjlist[v2].push_back(v1);
        edges.push_back({v1,v2});
    }

    int score=0;
    score = graphScore(adjlist,N);
    if(K==0){
        cout<<score;
        return 0;
    }
    map<int,vector<int>> pq;
    int i=0;
    for(auto p:edges){
        int u=p.first;
        int v=p.second;
        auto it1 = find(adjlist[u].begin(),adjlist[u].end(),v);
        auto it2 = find(adjlist[v].begin(),adjlist[v].end(),u);
        if(it1 != adjlist[u].end() and it2 != adjlist[v].end()){
            adjlist[u].erase(it1);
            adjlist[v].erase(it2);
        }
        int tempscore = graphScore(adjlist,N);
        pq[score-tempscore].push_back(i);
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
        i++;
    }

    int p=0;
    vector<int> tormv;
    for(auto ed:pq){
        for(int edge:ed.second){
            p++;
            tormv.push_back(edge);
            if(p>=K){
                break;
            }
        }
        if(p>=K){
            break;
        }
    }

    for(int edge:tormv){
        int u = edges[edge].first;
        int v = edges[edge].second;
        auto it1 = find(adjlist[u].begin(),adjlist[u].end(),v);
        auto it2 = find(adjlist[v].begin(),adjlist[v].end(),u);
        if(it1 != adjlist[u].end() and it2 != adjlist[v].end()){
            adjlist[u].erase(it1);
            adjlist[v].erase(it2);
        }
    }

    score = graphScore(adjlist,N);
    cout<<score;

    return 0;
}