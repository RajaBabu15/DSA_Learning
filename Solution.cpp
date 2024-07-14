#include<bits/stdc++.h>
using namespace std;
class Customer {
private:
	string residence_address;
	string telephone_number;
	string license_number;
	long cn;
	long annualPurchase;
public:
	Customer(string res, string tel, string license, long custNum);
	bool operator < (Customer cust);
	void updateAnnualPurchase(long amount);
	void resetAnnualPurchase();
	long getAnnualPurchase();
	long getCustomerNumber();
};
Customer::Customer(string res, string tel, string license, long custNum) {
	residence_address = res;
	telephone_number = tel;
	license_number = license;
	cn = custNum;
	annualPurchase = 0;
}
bool Customer::operator < (Customer cust) {
	return annualPurchase < cust.annualPurchase;
}
void Customer::updateAnnualPurchase(long amount) {
	annualPurchase += amount;
	cout << "Check-out successful\n";
	cout << "Annual purchase amount as of now: " << annualPurchase << "\n";
}
void Customer::resetAnnualPurchase() {
	annualPurchase = 0;
}
long Customer::getAnnualPurchase() {
	return annualPurchase;
}
long Customer::getCustomerNumber() {
	return cn;
}
class Supermarket {
private:
	vector<Customer> customers;
public:
	void registerCustomer();
	void checkOut();
	void preparePrizeWinners();
};
void Supermarket::registerCustomer() {
	string res, tel, license;
	fflush(stdin);
	cout << "Enter residential address:";
	getline(cin, res);
	cout << "Enter telephone number:";
	cin >> tel;
	cout << "Enter license number:";
	cin >> license;
	Customer customer(res, tel, license, customers.size() + 1);
	customers.push_back(customer);
	cout << "Customer registered successfully.\n";
	cout << "CN : " << customer.getCustomerNumber() << "\n\n";
}
void Supermarket::checkOut() {
	long custNum, amount;
	cout << "Enter customer number (CN):";
	cin >> custNum;
	int n = customers.size(), idx = -1;
	for (int i = 0; i < n; i++) {
		if (customers[i].getCustomerNumber() == custNum) {
			idx = i;
			break;
		}
	}
	if (idx == -1) {
		cout << "Invalid customer number. Please try again\n\n";
		return;
	}

	cout << "Enter purchase amount:";
	cin >> amount;
	customers[idx].updateAnnualPurchase(amount);
}
void Supermarket::preparePrizeWinners() {
	sort(customers.rbegin(), customers.rend());

	int n = customers.size(), winners = min(10, n);
	cout << "Surprise gift winners:\n";
	for (int i = 0; i < winners; i++) {
		cout << customers[i].getCustomerNumber() << "\n";
	}
	cout << "\nGold Coin winners:\n";
	for (int i = 0; i < n; i++) {
		if (customers[i].getAnnualPurchase() > 10000) {
			cout << customers[i].getCustomerNumber() << "\n";
		}
	}
	cout << "\n";

	for (int i = 0; i < n; i++)
		customers[i].resetAnnualPurchase();
}
int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	Supermarket supermarket;
	int choice;
	cout << "Welcome to Supermarket!";
	while (true) {
		cout << "Options:\n";
		cout << "1. Register as a new customer\n";
		cout << "2. Check-out a purchase\n";
		cout << "3. Prepare prize winners' list\n";
		cout << "4. Exit\n";
		cout << "Enter your choice:";
		cin >> choice;
		switch (choice) {
		case 1:
			supermarket.registerCustomer();
			break;
		case 2:
			supermarket.checkOut();
			break;
		case 3:
			supermarket.preparePrizeWinners();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "Invalid choice\n";
			break;
		}
	}
}
