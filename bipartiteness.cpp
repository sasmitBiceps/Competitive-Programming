// bipartite iff no odd cycle
//finds the colors as well
vector<int> visited(100005, 0);
vector<int> adj[100005];
vector<int> color(100005);
bool possible = 1;
void dfs(int i, int clr){
	color[i]=clr;
	visited[i] = 1;
	for(auto v : adj[i]){
		if(!visited[v]) dfs(v, !clr);
		else if(clr == color[v]) possible = 0;
	}
}

	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dfs(i, 0);
		}
	}
	if(possible) then bipartite
	else no
