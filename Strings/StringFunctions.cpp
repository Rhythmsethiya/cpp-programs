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
    // cout << s1.empty();

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


    // string s3 = s1;
    // s3.erase(3,3);  //iska matlab--> 3rd pos se (3+3)pos tak remove karna chahta hu 
    // cout << "after erase: "<<s3;
    


    // cout << endl<<"after inserting:" << endl;
    // s3.insert(3,"thm");
    // cout << s3 << endl;



    // cout << "using pop last element: \n";
    // s3.pop_back();
    // cout << s3;


    //finding the character in a string
    // s1 = "there is a needle in this haystack with needles";
    // s2 = "needle";
    // //find function returns npos if substring is not found on a string
    // cout << "s1: "<<s1 << endl;
    // cout << "s2: "<<s2;
    // cout << endl;
    // cout << "the string s2 is: ";
    // if(s1.find(s2)==string::npos) cout << "not found";
    // else cout << "found";
    // cout << " in s1";


    //comparing the two strings
    // s1 = "needle";
    // s2 = "needle";
    // int c = s1.compare(s2);
    // if(c==0) cout << "match";
    // else cout << "not match";

//Substring 
//    s = "this is a car, big daddy of all suvs";
//     s1 = s.substr(19,5);
//     cout << s1;
}