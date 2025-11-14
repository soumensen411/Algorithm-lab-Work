#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int numVert,numEdge;
	cin>>numVert>>numEdge;
	vector<int>graph[numVert+1];
    for(int i = 0;i<numEdge;i++){
    char a,b;
    cin>>a>>b;
    int x,y;
    x = a - 'a';
    y = b - 'a';
    if(x == y){
        graph[x].push_back(y);
    }
    else{
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    }
    for(int i = 0;i<numVert;i++){
        char c = i + 'a';
        cout<<c<<" : ";
        for(int j = 0;j<graph[i].size();j++){
            char d = graph[i][j] + 'a';
            cout<<d<<" ";
        }
        cout<<endl;
    }
    
}
