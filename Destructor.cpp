#include<iostream>
using namespace std;

class square{
         double l;
         public:
              square(double length)
              {
                  cout<<"Object created."<<endl;
                  l = length;
              }

              void display()
              {
                  cout<<"Area of square is: "<<(l*l)<<endl;
              }
          
           ~square()
           {
               cout<<"Object Destroyed."<<endl;
           }

};

int main()
{
    square s1(25);
    s1.display();
}
