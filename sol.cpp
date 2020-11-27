#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, b, m;
		cin >> n >> b >> m;
		int x[m];
		for(int i=0; i<m; ++i)
			cin >> x[i];
		int cnt=0, tmp=-1;
		for(int i=0; i<m; ++i) {
			if(x[i]/b!=tmp)
				cnt++;
			tmp=x[i]/b;
		}
		cout << cnt << "\n";
	}
}
