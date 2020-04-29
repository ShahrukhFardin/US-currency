/*USA CURRENCY SYSTEM
 * Shahrukh did this Coding
 * Contact - sharukhfardin1234@gmail.com */

#include <iostream>
#include <vector>

using namespace std;
int main(){
    
    cout<<"Hello!!, enter the Amount in cent : "<<endl;
    int cents;
    
    cin>>cents;
    
    //initialializing constant values
    const int centInDollars = 100;
    const int centInQuarts = 25;
    const int centInDime = 10;
    const int centInNick = 5;
    const int centInPenny = 1;
    
    int dollar=0,quart=0,dime=0,nick=0,penny=0; //initializing the variables which will store each currency data
    
    dollar = cents / centInDollars;
    cout<<"Dollars : "<<dollar<<endl;
    quart = cents / centInQuarts;
    cout<<"Quarts : "<<quart<<endl;
    
    int leftQuart{cents % centInQuarts}; // leftQuart keeps the left Quarts after calculation(converting to Quarts).
    
    dime = leftQuart / centInDime;
    cout<<"Dimes : "<<dime<<endl;
    
    int leftDime { dime % centInDime}; // Similer to leftQuart
    
    nick = leftDime % centInNick;
    cout<<"Nicks : "<<nick<<endl;
    
    int leftNick{nick % centInPenny}; // similer to leftDime
    
    penny = leftNick / centInPenny;
    cout<<"Penny : "<<penny<<endl;
    
    cout<<endl;
    cout<<"*********************Good Bye*********************"<<endl; // Decoration :p
    
    // Happy Coding :D //
    
    return 0;
    
}
