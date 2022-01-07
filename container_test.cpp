#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<deque>
#include <random>
#include <functional>

using namespace std;

/*
    container的使用
*/

int main() {

    // map
    map<int, int> mmap;
    mmap.insert(make_pair(1,10));
    mmap.insert(make_pair(2,20));
    mmap.insert(make_pair(3,30));
    mmap.insert(make_pair(4,40));
    mmap.insert(make_pair(5,50));
    for(auto item: mmap) cout << item.first << " " << item.second << endl;
    map<int, int>::iterator iter_low = mmap.lower_bound(2);
    map<int, int>::iterator iter_up = mmap.upper_bound(4);
    for(map<int, int>::iterator iter=iter_low; iter!=iter_up; iter++) {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << mmap.count(1) << endl;
    cout << (*mmap.find(1)).first << " " << (*mmap.find(1)).second << endl;
    mmap.erase(1);
    cout << mmap.count(1) << endl;
    mmap[2] += 1;
    for(auto item: mmap) cout << item.first << " " << item.second << endl;
    mmap.erase(next(mmap.begin()), prev(mmap.end()));
    for(auto item: mmap) cout << item.first << " " << item.second << endl;

    // set
    vector<int> mvec = {0, 1, 2, 3, 3};
    set<int> mset(mvec.begin(), mvec.end());
    for(auto item: mset) cout << item << " ";
    cout << endl;
    mvec.assign(mset.begin(), mset.end());
    for(auto item: mvec) cout << item << " ";
    cout << endl;

    // priority_queue
    priority_queue<int, deque<int>, greater<int>> pq;
    pq.push(2);
    pq.push(1);
    pq.push(3);
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // deque
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    cout <<  dq.front() << " " << dq.back() << endl;
    dq.pop_back();
    dq.push_front(1);
    dq.pop_front();
    

    return -1;
}