#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n,ind,count;
    int pull[6] = {500,200,100,50,20,10};
    cin >> n;
    ind=0;
    count=0;
    if (n%10 != 0){
        std::cout << -1 << std::endl;
    }
    else while (ind<5){
        while (n>0){
            n-=pull[ind];
            if (n>=0) count++;
        }
        n+=pull[ind];
        ind++;
    }
    cout << count;
    return 0;
}
