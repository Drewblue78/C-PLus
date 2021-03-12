#include <iostream>
using namespace std;
int main() {
  char ans;
  do {
    int month, day, sign, aries = 1, taurus = 2, gemini = 3, cancer = 4,
                          leo = 5, virgo = 6, libra = 7, scorpio = 8,
                          sagittarius = 9, capricorn = 10, aquarius = 11,
                          pisces = 12;

    cout << "Please give me your birthday then press enter: " << endl;
    cout << "Month ";
    cin >> month;
    cout << "Day ";
    cin >> day;
    // Aries
    if ((month == 3 && day >= 21 || month == 4 && day < 20)) {
      sign = aries;
      cout << "Your sign is Aries " << endl;
      // Cusp
      if (day >= 21 && day <= 23) {
        cout << "Your birthday is on the cusp with Pisces" << endl;
      }
      if ((month == 4 && day >= 17) && month == 4 && day <= 19) {
        cout << "Your birthday is on the cusp with Taurus" << endl;
      }
      // Taurus
    } else if ((month == 4 && day >= 20) || (month == 5 && day < 21)) {
      sign = taurus;
      cout << "Your sign is Tuarus " << endl;
      // Cusp
      if (day >= 20 && day <= 22) {
        cout << "Your birthday is on the cusp with Aries" << endl;
      }
      if ((month == 5 && day >= 18) && month == 5 && day <= 20) {
        cout << "Your birthday is on the cusp with Gemini" << endl;
      }
      // Gemini
    } else if ((month == 5 && day >= 21) || (month == 6 && day < 22)) {
      sign = gemini;
      cout << "Your sign is Gemini " << endl;
      // Cusp
      if (day >= 21 && day <= 23) {
        cout << "Your birthday is on the cusp with Taurus" << endl;
      }
      if ((month == 6 && day >= 19) && month == 6 && day <= 21) {
        cout << "Your birthday is on the cusp with Cancer" << endl;
      }
      // Cancer
    } else if ((month == 6 && day >= 22) || (month == 7 && day < 23)) {
      sign = cancer;
      cout << "Your sign is Cancer " << endl;
      // Cusp
      if (day >= 22 && day <= 24) {
        cout << "Your birthday is on the cusp with Gemini" << endl;
      }
      if ((month == 7 && day >= 20) && month == 7 && day <= 22) {
        cout << "Your birthday is on the cusp with Leo" << endl;
      }
      // Leo
    } else if ((month == 7 && day >= 23) || (month == 8 && day < 23)) {
      sign = leo;
      cout << "Your sign is Leo " << endl;
      // Cusp
      if (day >= 23 && day <= 25) {
        cout << "Your birthday is on the cusp with Cancer" << endl;
      }
      if ((month == 8 && day >= 20) && month == 8 && day <= 22) {
        cout << "Your birthday is on the cusp with Virgo" << endl;
      }
      // Virgo
    } else if ((month == 8 && day >= 23) || (month == 9 && day < 23)) {
      sign = virgo;
      cout << "Your sign is Virgo " << endl;
      // Cusp
      if (day >= 23 && day <= 25) {
        cout << "Your birthday is on the cusp with Leo" << endl;
      }
      if ((month == 8 && day >= 20) && month == 8 && day <= 22) {
        cout << "Your birthday is on the cusp with Libra" << endl;
      }
      // Libra
    } else if ((month == 9 && day >= 23) || (month == 10 && day < 23)) {
      sign = libra;
      cout << "Your sign is Libra " << endl;
      // Cusp
      if (day >= 23 && day <= 25) {
        cout << "Your birthday is on the cusp with Virgo" << endl;
      }
      if ((month == 10 && day >= 20) && month == 10 && day <= 22) {
        cout << "Your birthday is on the cusp with Scorpio" << endl;
      }
      // Scorpio
    } else if ((month == 10 && day >= 23) || (month == 11 && day < 22)) {
      sign = scorpio;
      cout << "Your sign is Scorpio " << endl;
      // Cusp
      if (day >= 23 && day <= 25) {
        cout << "Your birthday is on the cusp with Libra" << endl;
      }
      if ((month == 11 && day >= 19) && month == 11 && day <= 21) {
        cout << "Your birthday is on the cusp with Saggitarius" << endl;
      }
      // Sagittarius
    } else if ((month == 11 && day >= 23) || (month == 12 && day < 22)) {
      sign = sagittarius;
      cout << "Your sign is Sagittarius " << endl;
      // Cusp
      if (day >= 23 && day <= 25) {
        cout << "Your birthday is on the cusp with Scorpio" << endl;
      }
      if ((month == 12 && day >= 19) && month == 12 && day <= 21) {
        cout << "Your birthday is on the cusp with Capricorn" << endl;
      }
      // Capricorn
    } else if ((month == 12 && day >= 22) || (month == 1 && day < 20)) {
      sign = capricorn;
      cout << "Your sign is Capricorn " << endl;
      // Cusp
      if (day >= 22 && day <= 24) {
        cout << "Your birthday is on the cusp with Sagittarius" << endl;
      }
      if ((month == 1 && day >= 17) && month == 1 && day <= 19) {
        cout << "Your birthday is on the cusp with Aquarius" << endl;
      }
      // Aquarius
    } else if ((month == 1 && day >= 20) || (month == 2 && day < 19)) {
      sign = aquarius;
      cout << "Your sign is Aquarius " << endl;
      // Cusp
      if (day >= 20 && day <= 22) {
        cout << "Your birthday is on the cusp with Capricorn" << endl;
      }
      if ((month == 2 && day >= 16) && month == 7 && day <= 18) {
        cout << "Your birthday is on the cusp with Pisces" << endl;
      }
      // Pisces
    } else if ((month == 2 && day >= 19) || (month == 3 && day < 21)) {
      sign = pisces;
      cout << "Your sign is Pisces " << endl;
      // Cusp
      if (day >= 19 && day <= 21) {
        cout << "Your birthday is on the cusp with Aquarius" << endl;
      }
      if ((month == 3 && day >= 18) && month == 3 && day <= 20) {
        cout << "Your birthday is on the cusp with Aries" << endl;
      }
    }
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign="
         << sign;
    cout << endl << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
  return 0;
}