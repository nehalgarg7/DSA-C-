#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string str = "Nehal";
    // string str1 ("Garg");

    // cout << str <<" " <<str1;

    /*string str2;
    //cin >> str2; // cin is an extraction operator...it will not read character after spaces,tabs,etc..
    getline(cin,str2); // getline is used to read the whole string.
    cout <<str2;*/

    /*
    Indexing of the string

    str = N e h a l \0{null character(exists at the end of the string)}
          0 1 2 3 4  5
    */

    /*
    ASCII VALUES
       character has a numeric value

       a-z ,  A-Z , * , $ , + , -

       A - 65 a - 97
       B - 66 b - 98

       Z - 90 z - 122

    */

    char ch = 'a';
    cout << int(ch) << endl;

    /*
    String vs Character ARRAY

    - String is a class
    - String variables are the objects of this class
    - Array of char data type

    - String str_name; // char array_name[size];
    - String(dynamic memory allocation) // Char Array (static memory allocation)
    '
    - String (no pre-allocated memory) // Char Array (unused allocated memory)

    - String have inbuilt function but char Array have faster speed.
    */

    // Inbuilt Function

    string str4 = "Nehal Garg";

    reverse(str4.begin(), str4.end());

    cout << str4;

    string temp = str4.substr(0, 3); // {(position,length)}
    cout << temp;

    // Concatenate string.

    string n1 = "Colloge", n2 = "Wallah";
    cout << n1 + n2; //

    n1 += n2; // n2 is getting appended after n1
    // n1 = n1+n2 // here we create a copy string created for n1 and then n2 is added.

    // strcat() used to concatenate CHAR ARRAY;

    char s1[20] = "Cool";
    char s2[20] = "Water";

    strcat(s1, s2); // append s2 after s1.
    cout << s1 << endl;

    // push_back(); used to insert ch at the end of the string

    string s11 = "abcd";
    char c = 'e';

    s11.push_back(c);
    cout << s11;

    cout << s11.size();  // T.C. = O(1)
    cout << s11.length();

    cout << strlen(s1); // T.C. = O(n) // used to find the length of CHAR ARRAY

    // to_string();

    int num = 4;
    string num1 = to_string(num);
    num1 += "1";
    cout <<num1;
    cout << typeid(num1).name(); // used to print the variable data_type



    return 0;
}