#include <iostream>
//This programming set calculates a customer’s bill for a local cable company 
//by Rafael G. Rodriguez
// Bsit 1st year SECTION 3
using namespace std;

int main()
{
    char customerType = 'b' || 'r';
    int accountNumber, numOfPremChannels, numOfBasicServConn;
    int amountDue;

    const double RES_BILL_PROC_FEES = 4.50, RES_BASIC_SERV_COST = 20.50, RES_COST_PREM_CHANNEL = 7.50;
    const double BUS_BILL_PROC_FEES = 15.00, BUS_BASIC_SERV_COST = 75.00, BUS_BASIC_CONN_COST = 5.00, BUS_COST_PREM_CHANNEL = 50.00;

    
    amountDue = RES_BILL_PROC_FEES + RES_BASIC_SERV_COST + numOfPremChannels * RES_COST_PREM_CHANNEL;

    cout << "LOCAL CABLE BILLING\n";
    cout << "Enter Account Number : ";
    cin >> accountNumber;
    cout << "Enter Customer Code : ";
    cin >> customerType;

    switch (customerType)
    {
    case 'b':
        cout << "You are business customers\n";
        cout << "Number Of Basic Service Connections : ";
        cin >> numOfBasicServConn;
        cout << "Number of Premium Channels : ";
        cin >> numOfPremChannels;
        cout << "\nYour Customer Account No. : " << accountNumber << "\n";
        if (numOfBasicServConn <= 10){
             amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + numOfPremChannels * BUS_COST_PREM_CHANNEL;
             cout << "\nYour billing amount : " << amountDue << endl;
        }
           

        else{
            amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + (numOfBasicServConn - 10) * BUS_BASIC_CONN_COST + numOfPremChannels * BUS_COST_PREM_CHANNEL;
            cout << "\nYour billing amount : " << amountDue << endl;
        }
        break;
    case 'r':
        cout << "You are Residential customer\n";
        cout << "Number Of Basic Service Connections : ";
        cin >> numOfBasicServConn;
        cout << "Number of Premium Channels : ";
        cin >> numOfPremChannels;
        cout << "\nYour Customer Account No. : " << accountNumber << "\n";
        if (numOfBasicServConn <= 10){
             amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + numOfPremChannels * BUS_COST_PREM_CHANNEL;
             cout << "\nYour billing amount : " << amountDue << endl;
        }
           

        else{
            amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + (numOfBasicServConn - 10) * BUS_BASIC_CONN_COST + numOfPremChannels * BUS_COST_PREM_CHANNEL;
            cout << "\nYour billing amount : " << amountDue << endl;
        }
        break;
    default:
        cout << "invalid input it should be (r or b only)";
        break;
    }
    
    
    return 0;
}