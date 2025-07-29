//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string movieName;
    double adultTicket, childTicket, adultTicketSold, childTicketSold, donationPercentage;

    cout << "Enter the movie name: ";
    cin >> movieName;
    cout << "Enter the price of an adult ticket: ";
    cin >> adultTicket;
    cout << "Enter the price of a child ticket: ";
    cin >> childTicket;
    cout << "Enter the number of adult ticket sold: ";
    cin >> adultTicketSold;
    cout << "Enter the number of child ticket sold: ";
    cin >> childTicketSold;
    cout << "Enter the percentage of donation: ";
    cin >> donationPercentage;

    int totalTicketSold = adultTicketSold + childTicketSold;
    double grossAmount = (adultTicket * adultTicketSold) + (childTicket * childTicketSold);
    double amountDonated = donationPercentage / 100 * grossAmount;
    double netSale = grossAmount - amountDonated;
    cout << fixed << setprecision(2);
    cout << "Movie Name            :  " << movieName << endl;
    cout << "Number of ticket sold :  " << totalTicketSold << endl;
    cout << "Gross amount          :  " << grossAmount << endl;
    cout << "Amount donated        :  " << amountDonated << endl;
    cout << "Net Sale              :  " << netSale << endl;

    return 0;
}