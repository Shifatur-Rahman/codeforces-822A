#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int x, y, i, res=1;
cin>>x>>y;

for(i=1; i<=min(x,y); i++){
	res*=i;
}

cout<<res;

}
