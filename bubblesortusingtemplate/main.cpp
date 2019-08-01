#include <iostream>
using namespace std;
template<class T>
class num
{
  T number;
  public:
      num()
      {
          number=0;
      }
      void input()
      {
          cin>>number;
      }
      num operator +(num<T>c)
      {

       num<T>temp;
      temp.number=number+c.number;
       return(temp);

      }
      void show()
      {
          cout<<number;
      }
};
 main()
{
    num<T>n1,n2,n3;
    n1.input();
    n2.input();
    n3=n1+n2;
    n3.show();
}
