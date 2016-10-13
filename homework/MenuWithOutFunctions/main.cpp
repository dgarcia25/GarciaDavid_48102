/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 10th, 9:30 AM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    // Random Number
#include <ctime>      // Time
#include <iomanip> // Set precison 
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem A"<<endl;
        cout<<"2.  Type 2  for Problem B"<<endl;
        cout<<"3.  Type 3  for Problem C"<<endl;
        cout<<"4.  Type 4  for Problem D"<<endl;
        cout<<"5.  Type 5  for Problem E"<<endl;
        cout<<"6.  Type 6  for Problem F"<<endl;
        cout<<"7.  Type 7  for Problem G"<<endl;
        cout<<"8.  Type 8  for Problem H"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                int main(int argc, char** argv);
                //Declaration of Variables
            float calsBurned;   //Calories burned
            float calsPerMin =3.9f;  //Calories burned per minute


            for  (int i = 10; i <=30; i+5)
            {
                calsBurned = i * calsPerMin;
                cout<< "In " << i << "minutes you burned " <<calsBurned <<"calories.\n";
            }
            //Input values

            //Process values -> Map inputs to Outputs

            //Display Output

            //Exit Program
            cout<<endl;
                break;
            }
            case 2:{
                cout<<"Inside Problem B"<<endl;
                int main(int argc, char** argv);
                //Declaration of Variables
                int num = 0; //Integer number
                int sum = 0; //Integer sum

                //Input values
                cout<<"Enter how many numbers you'd like to sum up\n"; //How many number summed
                cin >> num;

                //Process values -> Map inputs to Outputs
                while (num < 0)
                {
                    cout <<"Please enter a positive integer ONLY.\n"; //Positive integer
                    cin >> num;
                }
                for (int i = 1; i <= num; i++)
                {
                    sum +=1;
                }
                cout << "Total sum is "<< sum;    //Total sum

               cout<<endl;
                break;
            }
            case 3:{
            cout<<"Inside Problem C"<<endl;
            int main(int argc, char** argv); 
                //Declaration of Variables
            float strtPop = 0.0f;
            int numDays = 0;
            float avgIncrease = 0.0f;
            float dailyPop = 0.0f;

            //Input values
            cout << "Please enter starting number of organisms: ";
            cin >> strtPop;
            //Process values -> Map inputs to Outputs
            while (strtPop < 2)
            {
                cout << "The starting population cannot be less than 2. Please re-enter: ";
                cin >> strtPop;
            }

            //Display Output
            cout << "Please enter the number of days the population multiplies: ";
            cin  >> numDays;

            while (numDays <1)
            {
                cout << "The number of days cannot be less than 1. Please re-enter: ";
                cin >> numDays;
            }

            cout<< "Please enter average daily increase in population (in percentage): ";
            cin >> numDays;

            while (avgIncrease < 0)
            {
                cout << "The average increase in population cannot be negative. Please re-enter: ";
                cin >> avgIncrease;
            }
            for (int i =1; i <= numDays; i++)
            {
                // Calculate Increase
                dailyPop = ((avgIncrease / 100) * strtPop) + strtPop;

            cout << "Population for day " << i << " is " << dailyPop <<endl;

            strtPop = dailyPop;

            }
            cout<<endl;
                break;
            }
            case 4:{
                cout<<"Inside Problem D"<<endl;
        int main(int argc, char** argv);
            //Declaration of Variables
            char userImput;

            //Input values

            //Process values -> Map inputs to Outputs
             {
                char userImput;

                while(true)
                {
                    cin >>userImput;
                    cout << userImput << endl;

                    if(userImput == '0-127') break; //ASCII
                        }
                    }
                    //Display Output
                        cout<<endl;
                        break;
                    }
                case 5:{
                    cout<<"Inside Problem E"<<endl;
               int main(int argc, char** argv);
            //Declaration of Variables
            int rmsOnFlr = 0;
            int totRooms = 0;
            int totFlrs = 0;
            int occRmsOnFlrs = 0;
            int totOccRooms = 0;
            float perOcc = 0.0f;

            //Input values
            cout << "Enter number of floors: ";
            cin >> totFlrs;
            //Process values -> Map inputs to Outputs
            while (totFlrs < 1)
            {
                cout <<"Number of floors must be at least 1. Please re-enter ";
                cin >> totFlrs;
            }

            //Display Output
            for (int i = 1; i <= totFlrs; i++)
            {
                if (i != 13)
                {
                    cout << "Enter the number of rooms on the floor " << i << " ";
                    cin >> rmsOnFlr;

                    while (rmsOnFlr < 10)
                    {
                        cout << "Number of rooms on floor must be at least 10. Please re-enter ";
                        cin >> rmsOnFlr;
                    }
                }
                    cout << "How many rooms are occupied? ";
                    cin >> occRmsOnFlrs;

                totRooms += rmsOnFlr;
                totOccRooms += occRmsOnFlrs;
            }
            perOcc = (totOccRooms * 1.0f / totRooms) *100.0f;
            cout <<"The hotel has total of " << totFlrs << "floors\n";
            cout << "The hotel has total of " << totRooms << "rooms\n";
            cout << "There are " << totOccRooms << "rooms occupied\n";
            cout << "There are " << totRooms - totOccRooms << "empty rooms.\n";
            cout << "Percentage of occupied rooms is " << setprecision(2) <<fixed <<perOcc <<"%\n";
            cout<<endl;
                break;
            }
            case 6:{
                cout<<"Inside Problem F"<<endl;
                int main(int argc, char** argv);
                    //Declaration of Variables
                    float level = 0; //Ocean level
                    int years= 25;  // Years rise
                    int i = 1;     // I equals one year
                    for (int i = 1; i <= years; i++)
                    {
                        level += 1.5; //Level plus equals 
                        cout << "year " << i << ": " << level <<"mm\n";
                    }
                    //Input values

                    //Process values -> Map inputs to Outputs

                    //Display Output
                cout<<endl;
                break;
            }
            case 7:{
                cout<<"Inside Problem G"<<endl;
        int main(int argc, char** argv);
            //Declaration of Variables
            const float INCREASE = 0.04; //Increase percentage
            const int YEARS = 6;     //Years 
            float memship = 2500;   // Membership cost

            //Input values

            //Process values -> Map inputs to Outputs
              for (int i = 1; i <= YEARS; i++)
            {
                memship = memship + (memship * INCREASE);
                cout<< "Year "<< i << "fees are: $" << memship << endl;
            }
            cout<<endl;
        break;
    }
            case 8:{
                cout<<"Inside Problem H"<<endl;
        int main(int argc, char** argv);
            //Declaration of Variables
            float dis;   //Distance traveled
            float speed; //Speed traveled
            int time;    //Time traveled
            //Input values
            cout<< "What is the speed of the vehicle? "; // Speed of Vehicle
            cin >> speed;

            //Process values -> Map inputs to Outputs
            while (speed <= 0)
            {
                cout << "Speed must be greater than zero. Please enter speed again: ";
                cin >> speed;
            }

            cout << "How many hours did it travel?"; // Hours traveled
            cin >> time;

            while (time < 1)
            {
                cout << "Time must be greater than zero. Please enter time again: ";
                cin >> time;
                }

            cout << "\nHour\tDistance Traveled\n"; // Hours distance time traveled
            cout << "----------------------\n";

            for (int i = 1; i <= time; i++)
            {
                dis = speed * i;
                cout << i << "\t\t" <<dis <<endl;
            }
            cout<<endl;
                break;
            }
            case 9:{
                cout<<"Inside Problem I"<<endl;
                int main(int argc, char** argv);
                    //Declaration of Variables
                    int numDays = 1; //Number of Days 
                    float money = 1.0; // 1 Penny
                    float tot = 0.0; // total pay
                    float dayPay = 0.0; //Paid a Day
                    //Input values
                    cout << "Enter number of days\n"; // Number of Days
                    cin >> numDays;

                    //Process values -> Map inputs to Outputs
                    while (numDays < 1)
                    {
                        cout << "Please enter valid number of days\n"; //Valid number of days
                        cin >> numDays;
                    }
                    //Display Output
                    for (int i = 1; i <= numDays; i++)
                    {
                        dayPay = money / 100;    //Money divided by one hundred
                        cout << "Day " << i << "you earned $" << dayPay << "\n"; //Earnings a day
                        tot += dayPay;
                        money *= 2;    // Money times equals two
                    }
                    cout << "Total earnings are $" << tot << endl; // Total earnings
                    
                    cout<<endl;
                break;
            }
            case 10:{
                cout<<"Inside Problem J"<<endl;
           int main(int argc, char** argv);
            //Declaration of Variables
            int randNum;
            int userNum;
            bool win = false;
            unsigned seed = time(0);
            int numOfAttempts = 0;

            // Input variables
            srand (seed);
            randNum = 1 + rand( )%10;

            //Process values -> Map inputs to Outputs
            cout << "I am thinking of a number. Can you guess what it is? " <<endl;
            cin >>userNum;
            cout <<randNum;

            //Display Output
            while (!win)
            {
                if (userNum < randNum)
                {
                    cout << "Too low, try again. " <<endl;
                    cin >> userNum;
                    numOfAttempts++;
                }
                else if (userNum > randNum)
                {
                    cout << "Too high, try again. " <<endl;
                    cin >> userNum;
                    numOfAttempts++;
                }
                else // winner
                {
                    numOfAttempts++;
                    cout << "Congratulations you guessed the correct number. " <<endl;
                    cout << "It took you " << numOfAttempts << "attempts." <<endl;
                    win = true;

                }
            }
            cout<<endl;
                break;
            }//End Case
        }//End the Switch/Case
        }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}



