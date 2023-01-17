#include <bits/stdc++.h>
using namespace std;

// boost & macro
#pragma optimize("O3")
#define nmax 200005
#define pint pair<int, int>
#define pong pair<ll, ll>
#define pool pair<bool, bool>
#define vint vector<int>
#define vong vector<ll>
#define stkii stack<int>
#define stkll stack<long long>
#define fi first
#define se second
typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uii;

#define oo 1e18

str tostr(int n){ // code from Kubogi <3
    stringstream ss;
    ss << n;
    str s; ss >> s;
    if (n < 10) s = "000"+s;
    else if (n < 100) s = "00"+s;
    else if (n < 1000) s = "0"+s;
    
    return s;
}

int main(){
	str sol, testdir, stmp, s;
	ll l, r;
	cout << "File to test (without .cpp): ";
	cin >> sol;
	cout << "Testcase directory: ";
	cin >> testdir;
	cout << "Range of tests (l, r): ";
	cin >> l >> r;
	stmp = "g++ " + sol + ".cpp -o " + sol;
	system(stmp.c_str());
	for(ll i = l; i <= r; ++i){
		stmp = "cp ./" + testdir + "/" + tostr(i) + ".inp " + "./input.inp";
		system(stmp.c_str());
		stmp = "./" + sol;
		system(stmp.c_str());
		stmp = "./" + testdir + "/" + tostr(i) + ".out";
		vector<str> vta, vtb;
		fstream fina(stmp.c_str(), fstream::in);
		while(fina >> s){
			vta.push_back(s);
		}
		fina.close();
		fstream finb("output.out", fstream::in);
		while(finb >> s){
			vtb.push_back(s);
		}
		cout << "Test " << i << ": ";
		if(vta.size() != vtb.size()){
			cout << "WRONG ANSWER! ";
			cout << vta.size() << " " << vtb.size() << "\n";
			continue;
		}
		bool chk = true;
		for(ll j = 0; j < vta.size() && chk; ++j){
			chk = vta[j] == vtb[j];
		}
		if(chk){
			cout << "AC\n";
		}else cout << "WRONG ANSWER!\n";
	}
	system("rm output.out");
	system("rm input.inp");
	
}

// COMMENT:

/* <<<CODE EXPLANATION>>>



*/


/* <<<CRE>>>

I, Sheyer, guaranteed that the idea for this code is personally made up by me: <Sheyer>
In case it is not, I give credit to the original Author:

I, Sheyer, guaranteed that this code is originally created by me, based on the idea mentioned above: <Sheyer>

In belief of h1a4c3k, a long lost account

*/
