#include<iostream>
#include<string.h>
using namespace std;

void dfa();

int main()
{
    dfa();
}

void dfa()
{
    //input taking
  int total_state, start, finalState,flag=0;
  cout<<"Enter the starting state: ";
  cin>>start;
  cout<<"Enter total number of states: "<<endl;
  cin>>total_state;
  cout<<"Enter total number of final states: "<<endl;
  cin>>finalState;
  int final2[finalState];
  cout<<"Enter the final states: ";
  for(int i=0;i<finalState;i++)
  {
     int n;
     cin>>n;
     final2[i]=n-1;
  }
  int table[total_state][2];

   //transition input
  for(int i=0; i<total_state; i++)
  {
     int m,p;
     cout<<"From state " <<i+1<< " getting input '0' " << " goes to state = ";
     cin>>m;
     table[i][0]=m-1;
     cout<<"From state " <<i+1<< " getting input '1 '" << " goes to state = ";
     cin>>p;
     table[i][1]=p-1;
  }

  //string
  cout<<"Enter string: ";
  string in;
  cin>>in;
  int current=start;
  int len=in.length();

  cout<<"\n";
  cout<<"Transition table: ";
  for(int i=0;i<len;i++)
  {
    cout<< "State "<<current+1<<" for input " << in[i] <<  " to " <<table[current][in[i]-48]+1<<endl;
    current=table[current][in[i]-48];
  }

 //result checking
  for(int i=0;i<finalState;i++)
  {
    if(current==final2[i])
    {
      flag=1;
      break;
    }
  }
  if(flag)
  {
    cout<<"ACCEPTED"<<endl;
  }
  else
  {
    cout<<"REJECTED"<<endl;
  }

}
