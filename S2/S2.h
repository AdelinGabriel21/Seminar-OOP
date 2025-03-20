//
// Created by adeli on 3/20/2025.
//


//aplicatie care gestioneaza conturi de banca
//contine: nume client, iban, suma
//putem: depozita, extrage bani

#ifndef S2_H
#define S2_H

#include <float.h>
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    string iban;
    double balance;
public:
    BankAccount(string iban, string name) {
        this->iban = iban;
        this->name = name;
        balance = 0.0;
        cout << "Bank account object created: " << iban << endl;
    }
    BankAccount(string iban, double balance, string name): BankAccount(iban, name) {
        this->balance = balance;
    }
    string get_iban() {
        return iban;
    }
    double get_balance() {
        return balance;
    }

    bool deposit(double amount) {
        if (amount < 0) {
            return false;
        }
        if (amount > DBL_MAX) {
            return false;
        }
    }

    ~BankAccount() {
        cout << "Bank account object destroyed: " << iban << endl;
    }
};

#endif //S2_H
