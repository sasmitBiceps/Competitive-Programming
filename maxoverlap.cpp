//maxOverlap for large values of intervals
// cnt use freq array here
void testcase(){
	int n;
	cin >> n;
	vector<pair<int,int>> entries;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		entries.push_back({x, 0});
		entries.push_back({y, 1});
		
	}
	sort(entries.begin(),entries.end());
	int ans = 0;
	int curr = 0;
	// maximum overlap for type [x,y) i.e y is not included
	for(int i = 0; i < entries.size(); i++){
		if(entries[i].second == 0) curr++;
		else curr--;
		ans = max(ans, curr);
	}
	cout << ans << '\n';
}
//ans is the max overlap x and y are interval beginning and interval closing resp, here y is not included
