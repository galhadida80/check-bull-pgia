#include <string>
#include "SmartGuesser.hpp"

using namespace std;
 
void bullpgia::SmartGuesser:: learn(string solutions) 
{
     bullSol = atoi(&solutions[0]);
   if(count1<10 && iterator<length1)
   {
        for(size_t i = 0; i < bullSol; i++)
        {
            arrGuess[iterator]=count1; 
            iterator++; 
        } 
           count1++;
   }
   else 
   {   
       count1=10;
       if(bullSol == 1)
       { 
           SmartGuess = SmartGuess + to_string(arrGuess[iterator1]);
           arrGuess[iterator1]=11;
           succes++;
           iterator1 = 0;
       }
       else
       {
        if(four == true){iterator1++;}
       four=true;
       }
   }
}

void bullpgia::SmartGuesser:: startNewGame(uint length)
{
    iterator=0;
    count1=0;
    iterator1=0;
    succes=1;
    four=false;
    length1=length;
    SmartGuess = "";
    arrGuess = new int[length];


}

string bullpgia::SmartGuesser:: guess()
{   
     string sg="";
     if(count1<10 && iterator<length1)
     {
        for(int i=1;i<=length1;i++)
           {sg=sg+to_string(count1);}
     }
     else if(succes<=length1)
     {
        int ch = arrGuess[iterator1];
          while(iterator1<length1 && arrGuess[iterator1]==11)
              { 
               iterator1++;
               ch = arrGuess[iterator1];
              }
             
          for(int i=1;i<=length1;i++)
              {      
             if(succes==i){sg=sg+to_string(ch);}
             else{sg=sg+"*";}
              }
     }
     else {
         delete []arrGuess ; 
         return SmartGuess; }


        return sg;
       
          
        
    }
    



