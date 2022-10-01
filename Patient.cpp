// function definitions for member functions in class Patient
#include <iostream>
#include "Patient.h"

bool Patient::validateInput(int userInput)   // input validation for days
{
    if (userInput >= 0)
        { return true; }
    else
        { return false; }
}

bool Patient::validateInput(double userInput)   // overloaded input validation for double values
{
    if (userInput >= 0)
        { return true; }
    else
        { return false; }
}

void Patient::setPatientType(char p)    // setter functions
    { patientType = p; }   // sets the value days from class Patient to the value entered in main()

void Patient::setDays(int d)
{
    while (Patient::validateInput(d) == false)  // loops until true
    {
        std::cout << "Invalid Input- Input MUST be greater than 0: ";
        std::cin >> d;
    }
    days = d;   // sets the value days from class Patient to the value entered in main()
}

void Patient::setRate(double r)
{
    while (Patient::validateInput(r) == false)  // loops until true
    {
        std::cout << "Invalid Input- Input MUST be greater than 0: ";
        std::cin >> r;
    }
    rate = r;   // sets the value days from class Patient to the value entered in main()
}

void Patient::setServices(double s)
{
    while (Patient::validateInput(s) == false)  // loops until true
    {
        std::cout << "Invalid Input- Input MUST be greater than 0: ";
        std::cin >> s;
    }
    services = s;   // sets the value days from class Patient to the value entered in main()
}

void Patient::setMedication(double m)
{
    while (Patient::validateInput(m) == false)
    {
        std::cout << "Invalid Input- Input MUST be greater than 0: ";
        std::cin >> m;
    }
    medication = m;   // sets the value days from class Patient to the value entered in main()
}

char Patient::getPatientType()                  // getter functions
    { return patientType; }
int Patient::getDays()
    { return days; }
double Patient::getRate()
    { return rate; }
double Patient::getServices()
    { return services; }
double Patient::getMedication()
    { return medication; }

double Patient::calcTotalCharges()      // member function that calculates a patient's total hospital bill
{
    double t;   // variable created to avoid compiler warnings
    switch (patientType)
    {
        case 'I':       // if user entered either 'I' or 'i'
        case 'i':
            t = (days * rate) + services + medication;
            break;
        case 'O':       // if user entered either 'O' or 'o'
        case 'o':
            t = services + medication;
            break;
    }
    return t;   // returns the calculation to main()
}