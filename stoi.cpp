//covert string to integer
int stoi1(string s){
	int idx = s.size()-1;
	int curr = 0;
	int exp = 1;
	while(idx >= 0){
		curr += exp*(s[idx]-'0');
		exp *= 10;
		idx--;
	}
	return curr;
}
