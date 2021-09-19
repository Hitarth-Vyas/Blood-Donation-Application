#include <stdlib.h>
#include <string.h>
using namespace std;

class details
{
public:
    string Name;
    int Age;
    string Gender;
    string Email;
    string City;
    int Pin_Code;
    long long Contact_Number;
    string Blood_Group;
    int WBC_Count;
    string RBC_Count;
    int Plasma_Count;
    void set_details(string name, string gender, int age, string city, int city_code, string email, long long contact_num, string bloodgrp, int wbc_count, string rbc_count, int plasma_count)
    {
        Name = name;
        Age = age;
        Gender = gender;
        Email = email;
        City = city;
        Pin_Code = city_code;
        Contact_Number = contact_num;
        Blood_Group = bloodgrp;
        WBC_Count = wbc_count;
        RBC_Count = rbc_count;
        Plasma_Count = plasma_count;
    }

    void input_details()
    {
        cout << "\nName = ";
        cin >> Name;
        cout << "\nAge = ";
        cin >> Age;
        cout << "\nGender = ";
        cin >> Gender;
        cout << "\nEmail = ";
        cin >> Email;
        cout << "\nCity = ";
        cin >> City;
        cout << "\nEnter your Pin code : ";
        cin >> Pin_Code;
        cout << "\nContact Number: ";
        cin >> Contact_Number;
        cout << "\nBlood Group: ";
        cin >> Blood_Group;
        cout << "\nWBC Count : ";
        cin >> WBC_Count;
        cout << "\nRBC Cout : ";
        cin >> RBC_Count;
        cout << "\nPlasma Count : ";
        cin >> Plasma_Count;
    }

    void request_details(string name, string gender, int age, string city, int city_code, string email, long long contact_num, string bloodgrp)
    {
        Name = name;
        Age = age;
        Gender = gender;
        Email = email;
        City = city;
        Pin_Code = city_code;
        Contact_Number = contact_num;
        Blood_Group = bloodgrp;
    }
    void print_requests_details()
    {
        cout << "Name = " << Name << endl;
        cout << "Age = " << Age << endl;
        cout << "Gender = " << Gender << endl;
        cout << "Email = " << Email << endl;
        cout << "City = " << City << endl;
        cout << "Contact Number: " << Contact_Number << endl;
        cout << "Blood Group: " << Blood_Group << endl;
    }
    void printinfo()
    {
        cout << "Name = " << Name << endl;
        cout << "Age = " << Age << endl;
        cout << "Gender = " << Gender << endl;
        cout << "Email = " << Email << endl;
        cout << "City = " << City << endl;
        cout << "Contact Number: " << Contact_Number << endl;
        cout << "Blood Group: " << Blood_Group << endl;
        cout << "WBC Count : " << WBC_Count << endl;
        cout << "RBC Cout : " << RBC_Count << endl;
        cout << "Plasma Count : " << Plasma_Count << endl;
    }
};

int main()
{
    details p1;
    details p2;
    details p3;
    details p4;
    details p5;
     set_details("Ravi", "Male", 33, "Puri", 752001, "ravi3442@gmail.com", 9323532345, "AB+",  8200, 4.87, 351000);
    set_details("Hari", "Male", 32, "Dehli", 110012, "hari7652@gmail.com", 8832532345, "B+",  7200, 4.81, 268000);
    set_details("Madhav", "Male", 29, "Madras", 600014, "madhav542@gmail.com", 9323543823, "B-",  9200, 5.19, 312000);
    set_details("Aadit", "Male", 26, "Nashik", 422102, "adit423@gmail.com", 9323567329, "O-",  5600, 5.02, 306000);
    set_details("Shweta", "Female", 34, "Ujjain", 456664"shweta586@gmail.com", 7847568238, "A+",  6200, 4.78, 291000);
    details r0;
    string id;
    string aru[5] = {"ARUN", "JOHN", "KING", "MANAN", "RAM"};
    int arp[5] = {123, 456, 789, 321, 786};
    while (1)
    {
        cout << "Select a choice:- \n 1.Admin\n 2.Donar\n";
        int r;
        cin >> r;
        if (r == 1)
        {
            string id;
            cout << "Enter your user-id in Uppercase:";
            cin >> id;
            for (int i = 0; i < 5; i++)
            {
                if (id == aru[i])
                {
                    cout << "Enter your password: ";
                    int pass;
                    cin >> pass;
                    if (pass == arp[i])
                    {
                        int i;
                        cout << "Login sucessfull\n";
                        cout << "Select task you want to execute: \n 1. Display details \n2. Request for blood \n";
                        cin >> i;
                        if (i == 1)
                        {
                            p1.printinfo();
                            p2.printinfo();
                            p3.printinfo();
                            p4.printinfo();
                            p5.printinfo();
                        }
                        else if (i == 2)
                        {
                            r0.printinfo();
                        }
                    }
                }
            }
        }
        else
        {
            cout << " 1. Register \n 2. Request for Blood \n 3. Instruction\n";
            cout << "Enter your choice: ";
            int a;
            cin >> a;
            if (a == 1)
            {
                details n1;
                n1.input_details();
                cout << "\n Your data was stored you are eligible to donate blood\n";
            }
            else if (a == 2)
            {
                cout << "Enter your details for blood request: 1. name, 2. gender, 3. age, 4. city, 5. city code, 6. email, 7. blood group \n";
                details r1;
                string name;
                cin >> name;
                string gender;
                cin >> gender;
                int age;
                cin >> age;
                string city;
                cin >> city;
                int city_code;
                cin >> city_code;
                string email;
                cin >> email;
                long long contact_num;
                cin >> contact_num;
                string bloodgrp;
                cin >> bloodgrp;
                r1.request_details(name, gender, age, city, city_code, email, contact_num, bloodgrp);
                cout<<"\n Your request for blood is registerd we will reach you soon!!";
                return 0;
            }
            else if (a == 3)
            {
                cout << "Do's\n>Eat a healthy and low fat meal before you donate blood.\n>Drink plenty of fluids a day before and after you donate blood.\n\nDon't\n>Do not smoke an hour before and after you donate your blood.\n>Do not drink alcohol a day before and after you donate blood\n\nBENIFITS:\n>Helps you stay healthy \n>Reduces risk of cancer \n>Improves cardiovascular health\n>Reduces obesity\n\nBLOOD DONATIONS STEPS:\n>The test\n>The donation\n>The storage\n>The factorisation \n\nAND SAVING LIVES!!\n\nPRECAUTIONS:\n>Drink extra fluids \n>Keep bandage for 5 hrs \n>Avoid heavy physical work\n>Lie down with your feet up\n>Keep yourself hydrated!!\n>No heavy lifting for 5 hrs \n>Apply a cold pack on the spot\n>A pain reliever if prescribed\n\nEVERY DROP COUNTS\n\n#Double Red Cell Donation\n>2 units of rbcs are donated once.\n>Minimum 2 weeks of recovery.\n>Only for O+ blood groups.\n>Done after every 112 days.\n>A single donation helps 2 lives.\n>Requires hardly 25 minutes. \n>To know more please call at :- 8329345701";
            }
        }
    }
}
