//Authors: Logen Thornton
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first; 
string last;
string name;

  //get user input
cout << "Please enter your first name." << endl;
cin >> first;
cout << "Please enter your last name." << endl;
cin >> last;

name.push_back(first[0]);
name.push_back('.');
name.push_back(last[0]);
name.push_back('.');

cout << "Welcome, "<< name << " your fortune is" << endl;





  //tell fortune

  return 0;
}
