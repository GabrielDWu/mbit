#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 1; i<= n; i++){
		for(int j = i; j<= n; j++){
			for(int k = j; k<= n; k++){
				if(i*j*k == n) ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}