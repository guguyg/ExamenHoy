#include <iostream>
#include <vector>

using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
//        return true;
    } else if (year % 100 != 0) {
        return true;
//        return false;
    } else if (year % 400 != 0) {
        return false;
//        return true;
    } else {
        return true;
//        return false;
    }
}

void removeLeapYears(vector<int>& years) {
    for (int i = 0; i < years.size(); i++) {
        if (isLeapYear(years[i])) {
            years.erase(years.begin() + i);
            i--;
        }
    }
}

int main() {
    vector<int> years;
    for (int year = 1922; year <= 1947; year++) {
        years.push_back(year);
    }

    removeLeapYears(years);

    for (int i = 0; i < years.size(); i++) {
        cout <<"Numero: "<<i+1<<" = "<<years[i] <<"\n";
    }
    cout << endl;

    return 0;
}
