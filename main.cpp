#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <windows.h>

using namespace std;

// Class Interface Declaration
class one {
public:
    virtual void get() = 0;
    virtual void show() = 0;
};

// Class for Patient Information
class info : public one {
public:
    char name[50], time[50];
    int num, age;
    
    void get() {
        system("cls");
        cout << "\nEnter the patient name: ";
        cin.getline(name, 50);
        cout << "Enter the appointment time: ";
        cin.getline(time, 50);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter appointment no: ";
        cin >> num;
        cin.ignore();  // Clear the newline character from the buffer after reading an integer
    }
    
    void show() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nNo: " << num;
        cout << "\nTime: " << time << endl;
    }
};

// Dr. Surjeet Singh Class
class Singh : public info {
public:
    void get() {
        system("cls");
        ofstream out("Dr_Surjeet_Singh.txt", ios::app | ios::binary);
        info::get();
        out.write((char*)&(*this), sizeof(info));
        out.close();
        cout << "Your entry has been saved.\n";
        cin.ignore();  // Clear the newline character from the buffer
    }

    void show() {
        ifstream in("Dr_Surjeet_Singh.txt", ios::binary);
        if (!in) {
            cout << "No Data in the File\n";
            cin.ignore();
            return;
        }
        while (in.read((char*)&(*this), sizeof(*this))) {
            info::show();
        }
        in.close();
    }
};

// Dr. Akshit Bansal Class
class Bansal : public info {
public:
    void get() {
        system("cls");
        ofstream out("Dr_Akshit_Bansal.txt", ios::app | ios::binary);
        info::get();
        out.write((char*)&(*this), sizeof(info));
        out.close();
        cout << "Your Entry Has Been Saved.\n";
        cin.ignore();
    }

    void show() {
        ifstream in("Dr_Akshit_Bansal.txt", ios::binary);
        if (!in) {
            cout << "No Data In The File\n";
            cin.ignore();
            return;
        }
        while (in.read((char*)&(*this), sizeof(*this))) {
            info::show();
        }
        in.close();
    }
};

// Dr. Nitin Goyal Class
class Goyal : public info {
public:
    void get() {
        system("cls");
        ofstream out("Dr_Nitin_Goyal.txt", ios::app | ios::binary);
        info::get();
        out.write((char*)&(*this), sizeof(info));
        out.close();
        cout << "Your Entry Has Been Saved.\n";
        cin.ignore();
    }

    void show() {
        ifstream in("Dr_Nitin_Goyal.txt", ios::binary);
        if (!in) {
            cout << "No Data In The File\n";
            cin.ignore();
            return;
        }
        while (in.read((char*)&(*this), sizeof(*this))) {
            info::show();
        }
        in.close();
    }
};

// Staff Class
class staff : public one {
public:
    char all[999];
    char name[50], age[20], sal[30], pos[20];

    void get() {
        ofstream out("staff.txt", ios::app);
        system("cls");
        cout << "Enter Name: ";
        cin.getline(name, 50);
        cout << "Enter Age: ";
        cin.getline(age, 20);
        cout << "Enter Salary: ";
        cin.getline(sal, 30);
        cout << "Enter Working Position: ";
        cin.getline(pos, 20);
        out << "Name: " << name << "\nAge: " << age << "\nSalary: " << sal << "\nPosition: " << pos << "\n\n";
        out.close();
        cout << "Your Information has been saved.\n";
        cin.ignore();
    }

    void show() {
        ifstream in("staff.txt");
        if (!in) {
            cout << "File open error\n";
            return;
        }
        while (in.getline(all, 999)) {
            cout << all << endl;
        }
        in.close();
        cout << "\nPress any key to continue: ";
        cin.ignore();
    }
};

// Main Menu and Doctor Information
class information : public info {
public:
    void drinfo() {
        system("cls");
        system("color F3");
        cout << "\n==============================================\n";
        cout << "\nThree Doctors Available with Information and Timing\n";
        cout << "==============================================\n";
        cout << "\nDr Surjeet Singh (Skin specialist)\n";
        cout << "\tMonday To Friday: 9AM to 5PM\n";
        cout << "\tSaturday: 9AM to 1PM\n";
        cout << "\tSunday: Off\n";
        cout << "\nDr Akshit Bansal (Child specialist)\n";
        cout << "\tMonday To Friday: 2PM to 10PM\n";
        cout << "\tSaturday: 8AM to 1PM\n";
        cout << "\tSunday: 12PM to 9PM\n";
        cout << "\nDr Nitin Goyal (DVM)\n";
        cout << "\tMonday to Friday: 8AM to 5PM\n";
        cout << "\tSaturday: 10AM to 1PM\n";
        cout << "\tSunday: Off\n";
        cout << "\nPress Any Key To Continue";
        cin.ignore();
    }

    void call_dr() {
        system("cls");
        int choice;
        cout << "\nPress 1 for Dr Surjeet Singh\n";
        cout << "Press 2 for Dr Akshit Bansal\n";
        cout << "Press 3 for Dr Nitin Goyal\n";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                Singh().get();
                break;
            case 2:
                Bansal().get();
                break;
            case 3:
                Goyal().get();
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    }

    void pinfoshow() {
        system("cls");
        int choice;
        cout << "\n1 - Press 1 for Dr Surjeet Singh\n";
        cout << "2 - Press 2 for Dr Akshit Bansal\n";
        cout << "3 - Press 3 for Dr Nitin Goyal\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                Singh().show();
                break;
            case 2:
                Bansal().show();
                break;
            case 3:
                Goyal().show();
                break;
            default:
                cout << "Invalid choice!\n";
                break;
        }
    }

    void menu() {
        system("cls");
        system("color FC");
        int choice;
        while (true) {
            cout << "\nMain Menu\n";
            cout << "1. Doctor Appointment\n";
            cout << "2. Save Staff Information\n";
            cout << "3. Check Patient Appointments\n";
            cout << "4. Check Staff Information\n";
            cout << "5. Change Password\n";
            cout << "6. Logout\n";
            cout << "Enter Choice: ";
            cin >> choice;
            cin.ignore();  // Clear the buffer after input

            switch (choice) {
                case 1:
                    call_dr();
                    break;
                case 2:
                    staff().get();
                    break;
                case 3:
                    pinfoshow();
                    break;
                case 4:
                    staff().show();
                    break;
                case 5:
                    cpasscode();
                    break;
                case 6:
                    return;  // Logout and exit the menu loop
                default:
                    cout << "Invalid choice!\n";
            }
        }
    }

    void passcode() {
        system("cls");
        char p1[50], p2[50];
        ifstream in("Password.txt");
        cin.ignore();
        cout << "Enter the password: ";
        cin.getline(p1, 50);
        in.getline(p2, 50);
        if (strcmp(p2, p1) == 0) {
            menu();
        } else {
            cout << "Incorrect passcode. Please try again.\n";
            Sleep(5000);
            passcode();
        }
        in.close();
    }

    void cpasscode() {
        char n[50];
        system("cls");
        ofstream out("Password.txt");
        cin.ignore();
        cout << "Enter new password: ";
        cin.getline(n, 50);
        out << n;
        out.close();
        cout << "Password has been saved.\n";
    }
};

int main() {
    information info;
    info.passcode(); // Start the program by validating the password
    return 0;
}

