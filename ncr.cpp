int dp[61][61];
dp[0][0] = 1;
	for(int i = 1; i <= 60; i++){
		for(int j = 0; j <= i ; j++){
			if(j==0 || j==i) dp[i][j] = 1;
			else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
		}
	}
