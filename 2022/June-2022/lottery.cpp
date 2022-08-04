#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    cout<<"CARPET CLEANING\n";
    int room;
    cout<<"NUMBER OF CARPET U WANT TO CLEAN\n";
    cin>>room;
    cout<<"CHARGE PER ROOM $30 \n";
    cout<<"========TOTAL AMOUNT==========="<<endl;
    cout<<" NUMBERS OF ROOMD = " << room <<endl;
    cout<<" CLEANING CHARGES = $" << 30 * room <<endl;
    double tax{6};
    cout<<" TAX = " << 30 * room * tax / 100 <<endl;
    double estimate{ 30 * room + 30 * room * tax / 100};
    cout<<" Estimate Value "<<    estimate <<endl;
    cout<<" Pack Validity For 30 Day\n";
    cout<<"====================================";
        

