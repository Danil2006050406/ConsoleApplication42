#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Doctor {
public:
    string specialization;

    Doctor(string spec) : specialization(spec) {}

    bool visit() {  
        return true; 
    }
};


class Visitor {
public:
    string profession;

    Visitor(string prof) : profession(prof) {}
};

int main() {
    
    Doctor dermatologist("Дерматолог");
    Doctor ENT("ЛОР");
    Doctor radiologist("Флюрографія");
    Doctor dentist("Стоматолог");
    
    Visitor doctor("Медик");
    Visitor teacher("Вчитель");
    Visitor guard("Охоронець");
 
    if (doctor.profession == "Медик") {
        if (doctor.profession == dermatologist.specialization) {
            bool success = dermatologist.visit();
            if (success) {
                cout << "Медик успішно відвідав дерматолога." << endl;
            }
            else {
                cout << "Медик неуспішно відвідав дерматолога." << endl;
            }
        }
        
    }
   
    return 0;
}
