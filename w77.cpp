
#include <iostream>
#include <time.h>

using namespace std;

int
main ()
{
  int money, bet, guess;



  money = 500;
  cout<<"welcome to casino" << endl;
  while(money>0)
    { 
             
     cout<<"you have"<<money<<endl;
     int random = rand() %2;
     cout<<random;
     cout<<"select 1 or 0"<<endl;
     cin >> guess;


    
       if (guess!= 0 && guess!=1)
	{ 
	    cout<<"you do not have enough cash"<<endl;
		  break;

			
	}  
	  cout<<"bet:"<<endl; 
	  cin>>bet;
	  money=money-bet;
	  
	  if(guess==random){
	  
	  cout << "u won" << endl;
		bet = bet * 2;
	  money = money + bet;
	  

	}
      else 
	{
	  
	  cout << "u lost" << endl;
	}
      
    }

  return 0;
}
