#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double PrevBalance,rate,Interest,Total,Payment,NewBalance;
    int EndOfYear = 1;//กำหนดค่านับ
    
	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	// fixed + setprecision จะช่วยให้ setprecision และไม่ขึ้นอยู่กับค่าของตัวเลข
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	while (PrevBalance > 0){
	    //คำนวน
	    Interest = PrevBalance*(rate/100);
	    Total = PrevBalance+Interest;
	    Payment = (Total < Payment) ? Total : Payment;
	    NewBalance = Total-Payment;
	    cout << setw(13) << left << EndOfYear; 
	    cout << setw(13) << left << PrevBalance;
	    cout << setw(13) << left << Interest;
	    cout << setw(13) << left << Total;
	    cout << setw(13) << left << Payment;
	    cout << setw(13) << left << NewBalance;
	    cout << "\n";	
	    
	    PrevBalance = NewBalance;
	    EndOfYear++;
	}
	return 0;
}