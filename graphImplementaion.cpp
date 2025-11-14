#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int vert,edge;
	cin>>vert>>edge;
	vector<int>graph[vert+1];
	for(int i = 0; i<edge; i++) {
		int a,b;
		cin>>a>>b;
		if(a == b) {
			graph[a].push_back(b);
		}
		else {
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
	}

	for(int i = 1; i<=vert; i++) {
		cout<<i<<" : ";
		for(int j = 0; j<graph[i].size(); j++) {
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}

}
