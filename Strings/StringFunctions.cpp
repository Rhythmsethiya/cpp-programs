#include<iostream>
#include<string.h>
using namespace std;

int main()
{       
    string s;
    // cin.getline(s,100); it id for character array not for string keyword

    // cout << "Enter the string\n";
    // getline(cin,s);

    string s1 = "Rhythm";
    string s2 = "Sethiya";

    //finding the length of the string
    // cout << "length of the string 1: "<<s1.length() << endl<<"length of the second string : "<<s2.length() << endl;

    //finding the front character and last character
    // cout << "s1: "<<s1 << " "<< "s2: "<<s2 << endl;
    // cout << "s1: "<<s1.front()<<"    ";
    // cout << "s2: "<<s2.front() << endl;

    // cout << "last elements" << endl;
    // cout << "s1: "<<s1.back()<<"    ";
    // cout << "s2: "<<s2.back();


    //appending function
    // cout << "before appending :"<< endl;
    // cout << s1 << endl << s2;

    // s1.append(s2);
    // cout << endl;
    // cout << endl << "after appending : "<< endl;
    // cout << s1 << endl << s2  << endl;


    string s3 = s1;
    s3.erase(3,3);  //iska matlab--> 3rd pos se (3+3)pos tak remove karna chahta hu 
    cout << "after erase: "<<s3;

    

}