// header file for class Patient
#ifndef PATIENT_H_
#define PATIENT_H_

class Patient
{
    private:
        char patientType {'I'};     // all necessary member variables with initialized default values {0}
        int days {0};
        double rate {0.0};
        double services {0.0};
        double medication {0.0};

        bool validateInput(int);       // input validation
        bool validateInput(double);

    public:
        Patient() = default;        // default constructor (sets values of member variables to 0)

        Patient(char p, int d, double r, double s, double m) :  // constructor for in-patients
            patientType{p}, days{d}, rate{r}, services{s}, medication{m} {}

        Patient(char p, double s, double m) :                   // constructor for out-patients
            patientType{p}, services{s}, medication{m} {}

        void setPatientType(char);                  // setter functions
        void setDays(int);
        void setRate(double);
        void setServices(double);
        void setMedication(double);

        char getPatientType();                      // getter functions
        int getDays();
        double getRate();
        double getServices();
        double getMedication();

        double calcTotalCharges();                  // member function that calculates a patient's total hospital bill
};

#endif