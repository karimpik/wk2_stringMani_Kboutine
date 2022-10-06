#include <iostream>
#include <string>
#include <iomanip> // steprecision, left , right , setw, fixed , show point
using namespace std;
/*
Write a program to generate a username and password, based on user input. The user will
input three words and two sequences of numbers. The username will be created by combining
the first letter of the first word entered, combined with the first two letters of the second
word and the first 3 letters of the third word.
The password will be created by combining the first letters of the 3 words and the first two
numbers of the two sequences of numbers.  */
/* purpose: program to geenrate username and password.
Enter three words, separated by spaces: dolphin porcupine toucan
now, enter two strings of numbers, separated by a space: 13579 8765432
Your username is dpotou
Your password is dpt1387
Author: Karim boutine
date: 10/05/2022

*/


int main() { 
      string word1 ; 
      string word2 ;
      string word3 ;
      string numbers1 ; 
      string numbers2 ;
      string username ;
      string password ;
  
  cout << "\t\t USERNAME and PASSWORD GENERATOR" << endl ;
  cout << "Enter three words, separated by spaces: " ;
  cin >> word1 >> word2 >> word3 ;
  cout << "now, enter two strings of numbers, seperated by a space:" << endl;
  cin >> numbers1 >> numbers2 ;
  
  username = word1.substr(0,1) + word2.substr(0,2) + word3.substr(0,3);
  cout << "Your username is  " << username << endl ;
  password = word1.substr(0,1) + word2.substr(0,1) + word3.substr(0,1) + numbers1.substr(0,2) + numbers2.substr(0,2) ;
  cout << "Your password is  " << password;
  }