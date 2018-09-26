//
// Created by raphaelsoul on 9/26/18.
//
#include <iostream>
#include <string>

using namespace std;

template <typename T, typename U> T add(T a, U b) {
    return a+b;
}

int main() {

    // double add
    double a = 0.01, b = 0.02;
    cout << " add(0.01, 0.02) : " << add<double>(a, b) << endl;

    // int add
    int i = 15, k = 20;
    cout << " add(15, 20) : " << add<int>(i, k) << endl;

    // string add
    string m = "foo", n = "bar";
    cout << " add('foo', 'bar') : " << add<string>(m, n) << endl;

    // add mixed type
    double p = 0.05;
    int q = 1;
    cout << " add(0.05, 1) : " << add<double, int>(p, q) << endl;

    // double t = 0.05;
    // string s = "foobar";
    // cout << " add(0.05, 'foobar') : " << add<double, string>(t, s) << endl;
    return 0;
}