#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


int main()
{
   cout<<"cpp Histogram - nimafanniasl"<<endl<<endl;
   int num;
   cout<<"How many numbers do you want to enter? ";
   cin>>num;
   num=num-1;
   int n[ num ];
   for (int a=0; a<=num;a++)
   {
   	cout<<"enter number: ";
   	cin>>n[a];
   }
   cout<<endl<<endl<<endl;
   cout << "   Element" << setw( 13 ) << "   Value" << setw( 20 ) << "Histogram" << endl;
   cout<<"........................................................"<<endl;

   
   for ( int i = 0; i <=num; i++ )
   {
      cout << setw( 6 ) << i << setw( 14 ) << n[ i ] << setw( 15 );
      
      for ( int j = 0; j < n[ i ]; j++ )   
               cout << '*';
               
      cout << endl; 
   } 

   
  cout<<endl<<endl<<endl<<"Press any key to continue . . .";
  
      
  getch();
}







