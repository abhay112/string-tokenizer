#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[100] = "This is a rainy day";
	char *ptr = strtok(s," ");
	cout << ptr << endl;
	while(ptr != NULL){
		ptr = strtok(NULL," ");
		cout << ptr << endl;	
	}

}/*
output
This
is 
a 
rainy 
day
*/