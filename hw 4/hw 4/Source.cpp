/*#include <iostream>;
using namespace std;

int main()
{
   //a
   const int SIZE = 5;
   unsigned int values[SIZE] = {2, 4 , 6, 8, 10};
   
   //b
   unsigned int *vptr;
   
   //c
   for(int i = 0; i < SIZE; i++)
   {
      cout<<"values["<<i<<"] = "<<values[i]<<endl;
   }

   //d
   vptr = values;
   vptr = &values[0];

   //e
   for(int offset = 0; offset < SIZE; offset++)
   {
      cout<<"* ( vptr + "<<offset<<" ) = "<<*(vptr + offset)<<endl;
   }

   //f
   for(unsigned int offset = 0; offset < SIZE; offset++)
   {
      cout<<"* ( vptr + "<<offset<<" ) = "<<*(values + offset)<<endl;
   }

   //g
   for(int i = 0; i < SIZE; i++)
   {
      cout<<"vptr["<<i<<"] = "<<vptr[i]<<endl;
   }

   //h
   cout<<values[4]<<endl;
   cout<<*(values+(unsigned int) 4)<<endl;
   cout<<vptr[4]<<endl;
   cout<<*(vptr+(unsigned int) 4)<<endl;

   //i
   // Value referenced by vptr + 3 is memory adress 1002512 
   //( assuming integers are of size 4 bytes because unsigned ints are of size 2. )

   //j
   //1002484 is the new memory adress being pointed at by vptr, assuming same as part i.


}*/