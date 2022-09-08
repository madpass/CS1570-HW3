// Programmer: Madison Passolano       date: 02/14/2020     
// File: hw3.cpp                       class: cs1570
// Purpose: To determine how hard the user has to work depending on rain, amt
//          of gas, their motivation, and who is present. 


#include <iostream>
#include <string>
using namespace std; 

int main()
{
  /*---------------DECLARE VARIABLES----------------------*/ 
  const int MIN_AGE = 0; 
  const int MAX_AGE = 120; 
  const int MIN_AMT_RAIN = 0; 
  const int MAX_AMT_RAIN = 50; 
  const int MIN_AMT_GAS = 0; 
  const int MAX_AMT_GAS = 500; 
  const int MIN_NUM_CHILD = 0; 
  const int MAX_NUM_CHILD = 1000; 
  const int MIN_NUM_ADULT = 0; 
  const int MAX_NUM_ADULT = 1000;  
  //set the min and max values for the inputs so they aren't unrealistic 

  string user_name; 

  char how_motivated;
  char present_intendent; 

  short num_child;
  short num_adult; 
  short result; 

  float rain_amt; 
  float gas_amt; 


  /*----------------WELCOME----------------------------------*/ 
  cout<<endl;
  cout<<"Welcome to The Work Decision Program."<<endl; 
  cout<<"Please enter your name: "; 
  cin>>user_name; 
  cout<<endl; 
  
  cout<<"    a = an excellent worker"<<endl;
  cout<<"    b = basically good worker"<<endl;
  cout<<"    c = can't get good help no more!"<<endl;
  cout<<"    d = don't plan on work from me"<<endl;
  cout<<"    e = elevated slothfulness"<<endl<<endl; 
  
  //do while loop to make sure the user only inputs the options listed
  do
  {
    cout<<user_name<<", how much work do you want to do today?"<<endl;
    cin>>how_motivated;

    if(how_motivated != 'a' && how_motivated != 'b' && how_motivated != 'c' && how_motivated != 'd' && how_motivated != 'e')
      cout<<"invalid input"<<endl; 
  }while(how_motivated != 'a' && how_motivated != 'b' && how_motivated != 'c' && how_motivated != 'd' && how_motivated != 'e'); 
  

  /*------------------IF INPUT IS e--------------------------*/ 
  if(how_motivated == 'e')
    cout<<user_name<<", you should stay in bed and skip work."<<endl<<endl; 



 /*-------------------IF INPUT IS d-------------------------*/
  if(how_motivated == 'd')
  {
    do
    {
      cout<<"How much did it rain last night (in inches)?"<<endl; 
      cin>>rain_amt;

      if((rain_amt > MAX_AMT_RAIN) || (rain_amt < MIN_AMT_RAIN))
        cout<<"invalid input"<<endl; 
    }while((rain_amt > MAX_AMT_RAIN) || (rain_amt < MIN_AMT_RAIN));

    if(rain_amt > MIN_AMT_RAIN)
      cout<<user_name<<", hide in tool shed."<<endl<<endl; 
    else
      cout<<user_name<<", hide in hedge."<<endl<<endl; 
  }





  /*----------------IF INPUT IS c-----------------------*/
  if(how_motivated == 'c')
  {
    do
    {
      cout<<"How much did it rain last night (in inches)?"<<endl; 
      cin>>rain_amt; 

      if((rain_amt > MAX_AMT_RAIN) || (rain_amt < MIN_AMT_RAIN))
        cout<<"invalid input"<<endl; 
    }while((rain_amt > MAX_AMT_RAIN) || (rain_amt < MIN_AMT_RAIN)); 

    if(rain_amt <= 1.5)
      cout<<user_name<<", lean on rake."<<endl<<endl; 
    else
      cout<<user_name<<", lean on broom...inside."<<endl<<endl; 
  }





  /*----------------IF INPUT IS b---------------------*/
  if(how_motivated == 'b')
  {
    do
    {
      cout<<"Is Superintendent Chalmers present? (y or n)"<<endl; 
      cin>>present_intendent; 
      if((present_intendent != 'y') && (present_intendent != 'n'))
        cout<<"invalid input"<<endl; 
    }while((present_intendent != 'y') && (present_intendent != 'n')); 

    if(present_intendent == 'y')
      cout<<user_name<<", get on hands and knees and scrub the floor."<<endl<<endl;
 
    else
    {
      do
      {
        cout<<"How many children are present?"<<endl; 
        cin>>num_child; 
        if((num_child > MAX_NUM_CHILD) || (num_child < MIN_NUM_CHILD))
          cout<<"invalid input"<<endl; 
      }while((num_child > MAX_NUM_CHILD) || (num_child < MIN_NUM_CHILD));

      do
      {
        cout<<"How many adults present?"<<endl; 
        cin>>num_adult;
        if((num_adult > MAX_NUM_ADULT) || (num_adult < MIN_NUM_ADULT))
          cout<<"invalid input"<<endl;
      }while((num_adult > MAX_NUM_ADULT) || (num_adult < MIN_NUM_ADULT));
      
      result = num_adult - num_child; //if pos, more adults 

      if(result > MIN_NUM_CHILD)
      {
        cout<<user_name<<", get on hands and knees and scrub the floor."<<endl<<endl; 
      }
      else
        cout<<user_name<<", mop the floor."<<endl<<endl; 
    }
  }






  /*---------------IF INPUT IS a---------------------*/
  if(how_motivated == 'a')
  {
    
    do
    {
      cout<<"How much did it rain last night (in inches)?"<<endl; 
      cin>>rain_amt; 
      if((rain_amt > MAX_AMT_RAIN) || (rain_amt < MIN_AMT_RAIN))
        cout<<"invalid input"<<endl;
    }while((rain_amt > MAX_AMT_RAIN) || (rain_amt < MIN_AMT_RAIN)); 

    do
    {
      cout<<"How much gas do you have (in inches)?"<<endl; 
      cin>>gas_amt; 
      if((gas_amt > MAX_AMT_GAS) || (gas_amt < MIN_AMT_GAS))
        cout<<"invalid input"<<endl;
    }while((gas_amt > MAX_AMT_GAS) || (gas_amt < MIN_AMT_GAS));
    
    if(rain_amt == 0.5)
      cout<<user_name<<", write c++ programs."<<endl<<endl;

    else if(rain_amt > 0.5)
    {
      if(gas_amt < 5)
        cout<<user_name<<", burn old textbooks from the 1940's."<<endl<<endl; 
      else
        cout<<user_name<<", use the gas to clean the bathrooms."<<endl<<endl;
    }

    else if(rain_amt < 0.5)
    {
      if((gas_amt < 10) && (gas_amt > 5))
        cout<<user_name<<", mow the grass"<<endl<<endl; 
      if(gas_amt > 10)
        cout<<user_name<<", get on the tractor and do laps around the school. Look busy!"<<endl<<endl; 
      if(gas_amt < 5)
        cout<<user_name<<", go get more gas."<<endl<<endl; 

    }

  }




  return 0; 
}


