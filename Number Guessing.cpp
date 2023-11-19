#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{

    int lb;
    int ub;
    cout<<" "<<endl<<endl;
    cout<<"Generate a random number from: ";
    cin>>lb;
    cout<<"Generate a random number upto: ";
    cin>>ub;


    
    srand((unsigned) time(NULL));  
    int ranNum = ( (rand() % (ub - lb + 1)) + lb );   //LOGIC TO GENERATE A RANDOM NUMBER WITHIN A GIVEN RANGE: 
    //cout<<rand(); 
    //cout<<"Your random number is: "<<ranNum<<endl<<endl;
    int userNum;



do
{
   
    cout<<"Enter your guess: "<<endl<<endl<<endl; //Take the guess from the user
        cin>>userNum;


        if ( (userNum<lb) || (userNum>ub))
        {
            cout<<"Guess within your given interval."<<endl<<endl<<endl;
            continue;
            
        }

        else if ((userNum)==(ranNum))
        {
            cout<<"WOW CORRECT GUESS!"<<endl<<"WELL DONE!"<<endl;
            break;
        }
        

        else if ( (userNum >= (ranNum-3)) && (userNum <= (ranNum+3)) ) //if the number guessed by the user is 3 units back or fro
        { 
            cout<<"Close guess!" <<endl<<"Try again."<<endl<<endl<<endl<<endl;
            continue; 
        }
        
        else{
            cout<<
            "Very Wrong :( "<<endl<<"Try again."<<endl<<endl<<endl;
            
        }
} while (1);

return 0;
}
