// program to calculate a patient's hospital charges
#include <iostream>
#include <iomanip>
#include "Patient.h"
using namespace std;

int main()
{
    Patient patient;       // object derrived from class Patient

    char patientType;      // determines whether or not a patient is an in-patient or an out-patient
    int days;              // variables used to calculate hospital charges
    double rate, services, medication;

    cout << "This program will calculate a patient's hospital charges." << endl     // prompts user for input
         << "Enter I for in-patient or O for out-patient: ";
    cin >> patientType;     // records whether the user is an in-patient or an out-patient

    // input validation for 'patientType'
	while (patientType != 'I' && patientType != 'i' && patientType != 'O' && patientType != 'o')
	{	
		cout << "Invalid Input - Enter I or O: ";
		cin  >> patientType;
	}

    switch (patientType)
    {
        case 'i':       // if user entered either 'I' or 'i'
        case 'I':
            cout << "Number of days spent in the hospital: ";
            cin >> days;
            patient.setDays(days);

            cout << "Daily room rate ($): ";
            cin >> rate;
            patient.setRate(rate);

            cout << "Lab fees and other service charges ($): ";
            cin >> services;
            patient.setServices(services);

            cout << "Medication Charges ($): ";
            cin >> medication;
            patient.setMedication(medication);

            cout << "Your total hospital bills is $" << patient.calcTotalCharges() << endl;
            break;
        case 'o':
        case 'O':       // if user entered either 'O' or 'o'
            cout << "Lab fees and other service charges ($): ";
            cin >> services;
            patient.setServices(services);

            cout << "Medication Charges ($): ";
            cin >> medication;
            patient.setMedication(medication);

            cout << "Your total hospital bills is $" << patient.calcTotalCharges() << endl;
            break;
    }

    return 0;
}