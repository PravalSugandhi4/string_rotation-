/*

Question:- Rotation of string c++
example:- 
           input:-  aabbcc
          output:-  caabbc
		               
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
  string str1;
  char temp;
  int len;
  
  cout<<"Enter the input string :-  ";
  cin>>str1;
  len=str1.length();
  temp=str1[len-1];
  
  for(int i=len-1;i>=0;i--)
  {
  	 str1[i]=str1[i-1];
	    
  }
  str1[0]=temp;
  
  cout<<str1;
  
  
}    



