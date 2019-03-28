#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#define FOR(i,n,m) for(int i=n;i<m;i++)
#define REP(i,n) FOR(i,0,n)
#define pb(x) push_back(x)
#define MAX 100
#define fst first
#define snd second
#define sz(x) int(x.size())
#define all(v) v.begin(),v.end()
#define mp(x,y) make_pair(x,y)

using namespace std;

int main(int argc, char *argv[]) {
	bool first = true;
	string input;
	while(getline(cin,input)){
		int strlen = input.length();
		for(int i = 0 ; i < strlen ; i++){
			if(input[i] == '"' && first){
				input[i] = '`';
				input.insert(i,"`");
				strlen++;
				first = false;
			}
			else if(input[i] == '"' && first == false){
				input[i] = '\'';
				input.insert(i,"\'");
				first = true;
				strlen++;
			}
		}
		cout << input << endl;

	}
    return 0;
}