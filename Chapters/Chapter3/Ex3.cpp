#include <iostream>
using namespace std;
int main() {
  double birthday, month, day, sign, aries, taurus, gemini, cancer, leo, virgo,
      libra, scorpio, sagittarius, capricorn, aquarius, pisces;

  cout << "Please give me your birthday then press enter: " << endl;
  cout << "Month ";
  cin >> month;
  cout << "Day ";
  cin >> day;

  if (month = 3 && day >= 21 || month <= 4 && day < 20) {
    sign = aries;
    cout << "Your sign is Aries " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=1 ";

    if ((month = 3 && day >= 19) && day < 21) {
      cout << "Your birthday is on the cusp with Pisces";
      cout << "That horoscope can be found at " << endl;
      cout << "https://www.horoscope.com/us/horoscopes/general/"
              "horoscope-general-daily-today.aspx?sign=12 ";
    }
    if ((month <= 4 && day >= 21) && day < 22) {
      cout << "Your birthday is on the cusp with Taurus";
      cout << "That horoscope can be found at " << endl;
      cout << "https://www.horoscope.com/us/horoscopes/general/"
              "horoscope-general-daily-today.aspx?sign=2 ";
    }
  } else if (month = 4 && day >= 20 || month <= 5 && day < 21) {
    sign = taurus;
    cout << "Your sign is Tuarus " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=2 ";
  } else if (month = 5 && day >= 21 || month <= 6 && day < 22) {
    sign = gemini;
    cout << "Your sign is Aquarius " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=3 ";
  } else if (month = 6 && day >= 22 || month <= 7 && day < 23) {
    sign = cancer;
    cout << "Your sign is Cancer " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=4 ";
  } else if (month = 7 && day >= 23 || month <= 8 && day < 23) {
    sign = leo;
    cout << "Your sign is Leo " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=5 ";
  } else if (month = 8 && day >= 23 || month <= 9 && day < 23) {
    sign = virgo;
    cout << "Your sign is Virgo " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=6 ";
  } else if (month = 9 && day >= 23 || month <= 10 && day < 23) {
    sign = libra;
    cout << "Your sign is Libra " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=7 ";
  } else if (month = 10 && day >= 23 || month <= 11 && day < 22) {
    sign = scorpio;
    cout << "Your sign is Scorpio " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=8 ";
  } else if (month = 11 && day >= 23 || month <= 12 && day < 22) {
    birthday = sagittarius;
    cout << "Your sign is Sagittarius " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=9 ";
  } else if (month = 12 && day >= 22 || month <= 1 && day < 20) {
    sign = capricorn;
    cout << "Your sign is Capricorn " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=10 ";
  } else if (month = 1 && day >= 20 || month <= 02 && day < 19) {
    sign = aquarius;
    cout << "Your sign is Aquarius " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=11 ";
  } else if (month = 2 && day >= 19 || month <= 3 && day < 21) {
    sign = pisces;
    cout << "Your sign is Pisces " << endl;
    cout << "Your horoscope can be found at " << endl;
    cout << "https://www.horoscope.com/us/horoscopes/general/"
            "horoscope-general-daily-today.aspx?sign=12 ";
  }
}