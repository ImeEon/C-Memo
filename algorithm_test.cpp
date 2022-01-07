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
    algorithm类的使用
*/

void print_vector(vector<int> vec) {
    vector<int>::iterator iter;
    for(iter=vec.begin(); iter!=vec.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

bool is_six(int i) {
    return i==6;
}

void plus_two(int& i) {
    i += 2;
}

int get_one() {
    return 1;
}

bool cmp(int a, int b) {
    return a > b; 
}

int main() {
    int m = 2, n = 3;

    // 二维
    vector<vector<int>> vec(m, vector<int>(n, 0));
	vector<vector<int>> vec_2(vec.begin() + 1, vec.end());
	cout << vec_2.size() << " " << vec_2[0].size() << endl;

    // api
    vector<int> vec_1(10, 0);
    print_vector(vec_1);

    vec_1.assign(7, 4);
    print_vector(vec_1);
    cout << vec_1.size() << endl;

    vec_1.push_back(1);
    vec_1.pop_back();

    int& tmp = vec_1.front();
    cout << tmp << endl;
    tmp = vec_1.back();
    cout << tmp << endl;

    vec_1.insert(vec_1.begin()+1, 3, 20);
    print_vector(vec_1);

    vec_1.erase(vec_1.begin());
    print_vector(vec_1);
    vec_1.erase(vec_1.begin(), vec_1.begin()+2);
    print_vector(vec_1);

    // copy(first, last, dst_first)
    vector<int> dst(10);
    copy(vec_1.begin(), vec_1.end(), dst.begin()+2);
    print_vector(dst);

    // count(first, last, val)
    cout << count(vec_1.begin(), vec_1.end(), 4) << endl;
    cout << count(vec_1.begin(), vec_1.end(), 30) << endl;

    // equal(v1.begin, v1.end, v2.begin, v2.end)
    vector<int> vec_3(vec_1);
    cout << equal(vec_1.begin(), vec_1.end(), vec_3.begin(), vec_3.end()) << endl;
    vec_3.pop_back();
    cout << equal(vec_1.begin(), vec_1.end(), vec_3.begin(), vec_3.end()) << endl;

    int t = 4;
    // cout << equal_range(vec_1.begin(), vec_1.end()) << endl;

    // fill(first, last, val)
    fill(vec_1.begin(), vec_1.end(), 10);
    print_vector(vec_1);

    // find(first, last, val)
    for(int i=0; i<vec_1.size(); i++ ){
        vec_1[i] = i;
    }
    auto f = find(vec_1.begin(), vec_1.end(), 5);
    if(f != vec_1.end()) {
        cout << *f << endl;
        cout << "下标" << distance(vec_1.begin(), f) << endl;
    }
    else cout << "not found" << endl;

    auto f_1 = find_if(vec_1.begin(), vec_1.end(), is_six);
    if(f_1 != vec_1.end()) {
        cout << *f_1 << endl;
        cout << "下标" << distance(vec_1.begin(), f_1) << endl;
    }
    else cout << "not found" << endl;

    // for_each(first, last, func)
    print_vector(vec_1);
    for_each(vec_1.begin(), vec_1.end(), plus_two);
    print_vector(vec_1);

    generate(vec_1.begin(), vec_1.end(), get_one);
    print_vector(vec_1);


    for(int i=0; i<vec_1.size(); i++ ) vec_1[i] = i;
    sort(vec_1.begin(), vec_1.end(), cmp);
    print_vector(vec_1);
    reverse(vec_1.begin(), vec_1.end());
    print_vector(vec_1);

    random_device rd;   
    mt19937  gen(rd());  
    shuffle(vec_1.begin(), vec_1.end(), gen);
    print_vector(vec_1);

    cout << endl;
    make_heap(vec_1.begin(), vec_1.end(), less<int>());
    print_vector(vec_1);
    make_heap(vec_1.begin(), vec_1.end(), greater<int>());
    print_vector(vec_1);
    sort_heap(vec_1.begin(), vec_1.end(), cmp);
    print_vector(vec_1);

    vector<int> vec_4(5, 8);
    fill(vec_4.begin(), vec_4.begin()+3, 4);
    vector<int>::iterator vec_4_iter = unique(vec_4.begin(), vec_4.end());
    for(auto iter=vec_4.begin(); iter!=vec_4_iter; iter++) cout << *iter << " ";
    cout << endl;

    print_vector(vec_1);
    replace(vec_1.begin(), vec_1.end(), 6, 10);
    print_vector(vec_1);

    auto remove_iter = remove(vec_1.begin(), vec_1.end(), 10);
    print_vector(vec_1);
    vec_1.erase(remove_iter, vec_1.end());
    print_vector(vec_1);

    return -1;
}