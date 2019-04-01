/***

涉及到时间复杂度度
群里讨论的一则相亲者微信号码线索是：两个素数之乘积是7140229933。

这里用C++实现。

***/

#include<stdio.h>
#include<math.h>
#define N 10000001
#include <iostream>


using namespace std;
bool prime[N];

int main()
{     
    int i, j;
    for(i = 2; i < N; i++){
        if(i%2) {prime[i] = true;} //默认是为 0的
        else {prime[i] = false;}
    }
    
    for(i = 3; i <= sqrt(N); i += 2){
        if(prime[i]) for(j = i + i; j <= N; j += i){
            prime[j] = false;
        }
    }
// cout << prime[i] << endl;
    
    for(i = 2; i < N; i++){
        if(prime[i] == true) printf("%d \n", i);
    }
        
    return 0;
}
