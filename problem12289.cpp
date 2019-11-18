#include <iostream>
#include <cstring>
using namespace std;

int solve(char *s){
	char sone[] = "one", stwo[] = "two";
	int number = 3, one = 0, two = 0;

	if(strlen(s) == 3) {
		for(int i = 0; i < 3; ++i) {
			if(s[i] == sone[i]) one++;
			if(s[i] == stwo[i]) two++;
		}
		number = (one > two) ? 1 : 2;
	}
	return number;
}


int main() {
	int K;
	char s[10];
  cin>>K;
	for(int i = 0; i < K; ++i){
		cin>>s;
    cout<< solve(s) <<endl;
	}
	return 0;
}
