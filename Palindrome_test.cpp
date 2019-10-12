#include<iostream>
#include<cstring>
using namespace std;


void pal(char cstring[]);

int main(){

char word[10];
cout<<"Enter a word to check if the word is a Palindrome: ";
cin>>word;

pal(word);

return 0;}

void pal(char cstring[]){

int len =strlen(cstring);
int count = 0;

for(int i = 0; i<len/2;i++)

   if(cstring[i]== cstring[ (len-1)-i])
   { count++;}
     
   if(count == len/2){
   cout<<"True";}
   else {
   cout<<"False";}
   
   //can you write recursive function
}