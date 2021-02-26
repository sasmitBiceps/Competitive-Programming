vector<int> in[300005], ad[300005], inDegree(300005);
vector<int> topological_sort;
//kahn's algo
for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		a--, b--;
		inDegree[b]++;
		ad[a].push_back(b);
		in[b].push_back(a);
	}
	queue<int> q;
	for(int i = 0; i < n; i++){
		if(inDegree[i]==0) q.push(i);
	}
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		topological_sort.push_back(curr);
		for(auto neighbour : ad[curr]){
			inDegree[neighbour]--;
			if(inDegree[neighbour]==0) q.push(neighbour);
		}
	}
	if((int)topological_sort.size() != n){
		cout << "-1\n";
	}
	else{
	
	}
