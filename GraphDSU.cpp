vector<ll> adj[150005];
vector<ll> sz(150005);
vector<ll> nedges(150005, 0);
vector<ll> label(150005);
//finds size of a component, number of edges in a component
//every component has a label.
void relabel(ll b, ll to){
	if(label[b] == to) return;
	label[b] = to;
	for(auto v : adj[b])
		relabel(v, to);
}
void merge(ll a, ll b){
	adj[a].push_back(b);
	adj[b].push_back(a);
	if(sz[label[b]] > sz[label[a]]){
		swap(a, b);
	}
	ll la = label[a], lb = label[b];
	nedges[la]++;
	if(la == lb)return;
	relabel(b, la);
	sz[la] += sz[lb];
	nedges[la] += nedges[lb];
}

void testcase(){
	ll n, m;
	cin >> n >> m;
	for(ll i = 0; i < n ; i++){
		sz[i]=1;
		label[i]=i;
	}
	for(ll i = 0; i < m; i++){
		ll a, b;
		cin >> a >> b;
		a--, b--;
		merge(a, b);
	}
}
