#include "testlib.h"
#include <iostream>
int main(int argc, char** argv){
    registerValidation(argc, argv);
    int t = inf.readInt(1, 100,"N");
    inf.readEoln();
    int sum=0;
    for(int i = 1;i <= t;i++){
        setTestCase(i);
		int x = inf.readInt(1, 1'000'0000, "N");
                sum=sum+x;
		inf.readEoln();
	}
    ensuref(sum<=1'000'0000, "Sum of all test cases exceeds the desired limit!");
    inf.readEof();
    return 0;
}
