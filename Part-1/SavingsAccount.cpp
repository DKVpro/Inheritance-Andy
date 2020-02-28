#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance )
{
    if (rate < 0)
    {
        rate = 0;
    }
    this->interestRate = rate;
}

double SavingsAccount::calculateInterest() {
    // your code
}
void SavingsAccount::display(ostream & os) const
{
    os << "Account type: Saving" << endl;
    os.precision(.2);
    os << "Balance: $" << this->getBalance() << endl;
    os << "Intrest rate: (%)" <<  this->interestRate << endl;
}
