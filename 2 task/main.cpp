#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct lesson {
    int start, end;
    //lesson(int start, int end) : start(start), end(end) { }
};
bool cmp(lesson a, lesson b){
    float aR = (float) (a.end - a.start)/a.start;
    float bR = (float) (b.end - b.start)/b.start;
    return aR < bR;
}
int main()
{
    int n, ans;
    cin >> n;
    vector<lesson> R(n);
    for(int i =0; i<n;i++) cin >> R[i].start >>R[i].end;
    sort(R.begin(),R.end(), cmp);
    ans=0;
    while (not R.empty()){
        ans++;
        lesson check= R[0];
        vector<lesson> Rstart;
        Rstart = R;
        for(int i =0; i<n;i++){ 
            if (check.end == R[i].start){
                check = R[i];
                R.erase(R.begin() + i);
            } 
            
        }
        if (R.size()==Rstart.size()) break;

    }
}
cout << ans;
