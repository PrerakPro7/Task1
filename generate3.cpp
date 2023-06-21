#include "testlib.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int t = rnd.next(1,100);
	println(t);
	vector<int>a(t);
	for(int i = 0;i < t;i++){
        int p=10000000/t;
		a[i] = rnd.next(1, p);
		println(a[i]);
	}
    return 0;
}