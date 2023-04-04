/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void f(string &str, int i, string result, vector<string> &li, vector<string> &v)
{
    if (i == str.size())
    {
        li.push_back(result);
        return;
    }

    int digit = str[i] - '0';
    if (digit <= 1)
    {
        f(str, i + 1, result, li, v);
        return;
    }

    for (int j = 0; j < v[digit].size(); j++)
    {
        f(str, i + 1, result + v[digit][j], li, v);
    }
    return;
}

int main()
{
    vector<string> v(10);
    v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "luv", "wxyz"};
    string str = "23";
    vector<string> li;
    f(str, 0, "", li, v);
    for (auto e : li)
    {
        cout << e << " ";
    }
    return 0;
}

// check lec: https://www.youtube.com/watch?v=9c0GajqYd8E&list=PLxgZQoSe9cg0df_GxVjz3DD_Gck5tMXAd&index=38