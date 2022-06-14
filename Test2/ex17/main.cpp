#include <iostream>
#include <vector>
#include "Date.h"
#include "Person.h"

using namespace std;

// persons born before date
void born_before(const vector<Person>& persons, const Date& date) {
    date.show();
    cout << ": ";
    for(auto& person : persons){
        if (person.get_birth_date().is_before(date)){
            person.show();
            cout << " ";
        } 
    }
}
