#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct lesson {
    int start, end;
    //lesson(int start, int end) : start(start), end(end) { }
};
bool cmp(lesson a, lesson b){
    return a.end - a.start < b.end - b.start;
}
int main()
{
    int n, ans, index;
    cin >> n;
    vector<lesson> R(n);
    vector<lesson> A;
    for(int i =0; i<n;i++) cin >> R[i].start >>R[i].end;
    sort(R.begin(),R.end(), cmp);
    lesson min= R[0];
    ans=0;
    index=0;
    while (not R.empty()){
        A[index]=min;
        index++;
        for (int i=0; i<n; i++){
            if (R[i].start < min.start && R[i].start < min.end) {
                R.erase(R.begin() + i);}
        }
    }
    cout << A.size();
}
