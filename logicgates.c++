#include<iostream>
using namespace std;
int a, b;

void andoperation(int a, int b)
{
  if (a == 0 && b == 0)
    {
      cout << "\n A=0 and B=0 is 0";
    }
  else if (a == 0 && b == 1)
    {
      cout << "\n A=0 and B=1 is 0";
    }
  else if (a == 1 && b == 0)
  
    {
      cout << "\n A=1 and B=0 is 0";
    }
  else
    {
      cout << "\n A=1 and B=1 is 1";
    }
}

void oroperation(int a, int b)
{
  if (a == 0 && b == 0)
    {
      cout << "\n A=0 or B=0 is 0";
    }
  else if (a == 0 && b == 1)
    {
      cout << "\n A=0 or B=1 is 1";
    }
  else if (a == 1 && b == 0)
    {
      cout << "\n A=1 or B=0 is 1";
    }
  else
    {
      cout << "\n A=1 or B=1 is 1";
    }
}

void notoperation(int a)
{
  if (a == 0)
    {
      cout << "\n A=0 not is 1";
    }
  else
    {
      cout << "\n A=1 not is 0";
    }
}

void implication(int a,int b)
{
  if (a == 0 && b == 0)
    {
      cout << "\n A=0 implies B=0 is 1";
    }
  else if (a == 0 && b == 1)
    {
      cout << "\n A=0 implies B=1 is 1";
    }
  else if (a == 1 && b == 0)
    {
      cout << "\n A=1 implies B=0 is 0";
    }
  else
    {
      cout << "\n A=1 implies B=1 is 1";
    }

}

void doubleimplication(int a,int b)
{
  if (a == 0 && b == 0)
    {
      cout << "\n A=0 doubleimplies B=0 is 0";
    }
  else if (a == 0 && b == 1)
    {
      cout << "\n A=0 doubleimplies B=1 is 1";
    }
  else if (a == 1 && b == 0)
    {
      cout << "\n A=1 doubleimplies B=0 is 1";
    }
  else
    {
      cout << "\n A=1 doubleimplies B=1 is 0";
    }

}


int main ()
{
  cout<<"\nEnter the value of A ";
  cin>>a;
  cout<<"\nEnter the value of B ";
  cin>>b;
  andoperation(a,b);
  oroperation(a,b);
  notoperation(a);
  notoperation(b);
  implication(a,b);
  doubleimplication(a,b);
}
