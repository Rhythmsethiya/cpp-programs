#include<iostream>
#include<vector>
#include<string.h>  //for strlen() function

using namespace std;


int lengthofstring(char arr[],int size)
{
    int length=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        length++;
    }

    return length;
}

// character array by default hi reference se pass ho rhe hote hai 
void lowerToUpper(char ch[],int size)
{
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='a' and ch[i]<='z')
        {   
            ch[i] = ch[i]-'a'+'A';
        }
    }


    
}
int main()
{
    // //char array
    // string arr;  //it is combination of characters which called string
    // //OR string arr;   //we don't need to define size it is automatically stop after pressing enter or space 

    // cout << "Enter the name";
    // // we dont need to take input characters using for loop 
    // cin >> arr;
    // cout << "using direct name: \n";
    // cout << arr;
    // cout << "using for loop:\n";
    // for(int i=0;i<arr.size();i++)
    // {
    //     cout << arr[i] << " ";
    // }


    //for printing after space we use getline
    // char a[10];
    

    // cout << "name after space: \n";
    // cin.getline(a,100);   //don't work for string keyword 

    // cout << "your name: "<<a;



    // basically normal cin don't allow space , tab and enter-->  ( it terminates)



    //finding the length of the string 
    char ch[100];
    // // cin >> ch;  for cin '\0'  
    //     // for getline '\0' means enter 
    cout << "Enter the string\n";

    cin.getline(ch,100);
    // int length  = lengthofstring(ch,100);

    // cout << "The length of the string: "<< length;


    // // using strlen() function
    // int l = strlen(ch);
    // cout << "\nusing strlen() function: " << l;


    //reverse the string
    //using swap function
    // int i = 0;
    // int j = (strlen(ch)-1);
    // while(i<j)
    // {

    //     swap(ch[i],ch[j]);
    //     i++;
    //     j--;

    // }

    // cout << "after reversing\n";
    // cout << ch;

    //converting lowercase to uppercase 

    // // since lowercase ascii value from 97 and uppercase from 65
    //  lowerToUpper(ch,strlen(ch));
    // cout << "it's uppercase: " <<ch;


    //HW--> insert space whenever we see '@' in the given string 
    // for(int i=0;ch[i]!='\0';i++)
    // {
    //     if(ch[i]=='@')
    //     {
    //         ch[i] = ' ';
    //     }
    // }

    ////////////////////////////////////////
    


    // check Palindrome
    // int i = 0;
    // int j = strlen(ch)-1;
    // int flag=0;
    // while(i!=j)
    // {
    //     if(ch[i]!=ch[j]) {
    //         cout << "not a palindrome\n";
    //         flag=1;
    //         break;
    //     }
    //     i++;
    //     j--;
    // }

    // if(flag==0) cout << "Palindrome\n";
}