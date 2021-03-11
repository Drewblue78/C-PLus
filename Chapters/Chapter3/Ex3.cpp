#include <iostream>
using namespace std;
int main() {
  int month, day, sign, aries = 1, taurus = 2, gemini = 3, cancer = 4, leo = 5,
                        virgo = 6, libra = 7, scorpio = 8, sagittarius = 9,
                        capricorn = 10, aquarius = 11, pisces = 12;

  cout << "Please give me your birthday then press enter: " << endl;
  cout << "Month ";
  cin >> month;
  cout << "Day ";
  cin >> day;

  if ((month == 3 && day >= 21 || month <= 4 && day < 20)) {
    sign = aries;
    cout << "Your sign is Aries " << endl;

    if (day >= 21 && day <= 23) {
      cout << "Your birthday is on the cusp with Pisces" << endl;
    }
    if ((month == 4 && day >= 17) && month == 4 && day < 19) {
      cout << "Your birthday is on the cusp with Taurus" << endl;
    }

  } else if ((month == 4 && day >= 20) || (month == 5 && day < 21)) {
    sign = taurus;
    cout << "Your sign is Tuarus " << endl;

  } else if ((month == 5 && day >= 21) || (month == 6 && day < 22)) {
    sign = gemini;
    cout << "Your sign is Gemini " << endl;

  } else if ((month == 6 && day >= 22) || (month == 7 && day < 23)) {
    sign = cancer;
    cout << "Your sign is Cancer " << endl;

  } else if ((month == 7 && day >= 23) || (month == 8 && day < 23)) {
    sign = leo;
    cout << "Your sign is Leo " << endl;

  } else if ((month == 8 && day >= 23) || (month == 9 && day < 23)) {
    sign = virgo;
    cout << "Your sign is Virgo " << endl;

  } else if ((month == 9 && day >= 23) || (month == 10 && day < 23)) {
    sign = libra;
    cout << "Your sign is Libra " << endl;

  } else if ((month == 10 && day >= 23) || (month == 11 && day < 22)) {
    sign = scorpio;
    cout << "Your sign is Scorpio " << endl;

  } else if ((month == 11 && day >= 23) || (month == 12 && day < 22)) {
    sign = sagittarius;
    cout << "Your sign is Sagittarius " << endl;

  } else if ((month == 12 && day >= 22) || (month == 1 && day < 20)) {
    sign = capricorn;
    cout << "Your sign is Capricorn " << endl;

  } else if ((month == 1 && day >= 20) || (month == 02 && day < 19)) {
    sign = aquarius;
    cout << "Your sign is Aquarius " << endl;

  } else if ((month == 2 && day >= 19) || (month == 3 && day < 21)) {
    sign = pisces;
    cout << "Your sign is Pisces " << endl;
  }
  cout << "Your horoscope can be found at " << endl;
  cout << "https://www.horoscope.com/us/horoscopes/general/"
          "horoscope-general-daily-today.aspx?sign="
       << sign;
}