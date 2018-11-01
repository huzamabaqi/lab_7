#include <iostream> 
#include <time.h> 
using namespace std;



int main () 
{

int c,g,b; 
c=500;

cout << "You have" << c << "to bet" << endl; 

while (c > 0|| c == c-b )
{
srand( time(NULL) );
int random = rand() % 2;
    
                                cout <<"please enter how much $ cash you would like to bet\n";
                                cin >> b; 

                                cout << "now enter either 1 or 0\n";
                                cin >> g;

if (b >c )
{ 
    cout << "you are now cashing out" << endl; 
    
    return 0;
}






       if (g == random)
{
    cout << "You guessed " << random << endl;
     }

 else if (random == g  )
{
    cout << "Congrats, you won "<<b << "|" << endl << endl; 
    cout << " Your new amount is " << c + b << "." <<  endl; 


}

else 
{ 
    cout << "Sorry! You Lost " << b << "." << endl; 
    cout << "Your new amount is " << c - b << "." <<  endl; 
}


}


    return 0; 
}
 