#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[100],f='a';
   int i;
   cout << "Tuples are : ({A,B,C} , {0,1} , & , A , {C}) " << endl ;
	cout << "Enter a String which contains only 0,1" << endl;
	cin >> str ;
	cout << "Steps " << endl << " Start --> A --> " ;
   for(i=0;str[i]!='\0';i++) {
      switch(f) {
         case 'a':
		 	if(str[i]=='0') {
				f='a' ;
				cout << "A" ;
			}
       		else if(str[i]=='1')
			{
				f='b';
				cout << "B" ;
			}
         break;
         case 'b':
         	if(str[i]=='0') {
				f='a' ;
				cout << "A" ;
			}
       		else if(str[i]=='1')
			{
				f='c';
				cout << "C" ;
			}
         break;
         case 'c':
		 	if(str[i]=='0') {
				f='a' ;
				cout << "A" ;
			}
       		else if(str[i]=='1')
			{
				f='c';
				cout << "C" ;
			}

         break;
      }

      cout << "-->";
   }
   if(f=='c')
      cout <<"\nString is accepted";
   else cout <<"\nString is not accepted";
      return 0;
}
