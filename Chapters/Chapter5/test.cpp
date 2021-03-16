#include <cmath>
#include <iostream>
using namespace std;

void description();

void get_input(double& num1, double& num2, double& num3, double& num4);

void get_average(double& num1, double& num2, double& num3, double& num4,
                 double& avg);

void get_standard_deviation(double& num1, double& num2, double& num3,
                            double& num4, double& avg, double& sd, double& vr);

void output_standard(double num1, double num2, double num3, double num4,
                     double avg, double sd, double vr);

int main() double avg, sd, num1, num2, num3, num4, vr;
char again;
description();
do {
  035 get_input(num1, num2, num3, num4);
  036 get_average(num1, num2, num3, num4, avg);
  037 get_standard_deviation(num1, num2, num3, num4, avg, sd, vr);
  038 output_standard(num1, num2, num3, num4, avg, sd, vr);
  039 cout << "would you like to run program again?";
  040 cout << endl;
  041 cin >> again;
  042 cout << endl;
  043
} while ((again == 'y') || (again == 'Y'));
044 cout << endl;
045 cout << "<PROGRAM END>";
046 cout << endl << endl << endl << endl;
047 system("pause");
048 return 0;
049

    050
}
051 void description()  // description of how the program runs and does the
                        // calculation step by step
    052 {
  053 cout << "Welcome to program STDDEV, this program calulates standard "
              "deviation.\nHow you ask?\n";
  054 cout << "1.this program asks for 4 scores.\n";
  055 cout << "2.then finds the average using the scores you enter and then\n";
  056 cout << "3.the scores are subtraced by the average and squared to find "
              "the deviations\n";
  057 cout << "4.then the program adds the 4 deviations \n";
  058 cout << "5.and then divides them by the number of scores\n";
  059 cout << "the value that is found is called variance\n";
  060 cout << "Finally the program square roots the variance and outputs "
              "standard deviation.";
  061 cout << endl;
  062 cout << endl;
  063 cout << endl;
  064
}
065 void get_input(double& num1, double& num2, double& num3, double& num4) 066 {
  067 cout << "Enter first score:";
  068 cout << endl;
  069 cin >> num1;
  070 cout << endl;
  071 cout << "Enter second Score:";
  072 cout << endl;
  073 cin >> num2;
  074 cout << endl;
  075 cout << "Enter third score:";
  076 cout << endl;
  077 cin >> num3;
  078 cout << endl;
  079 cout << "Enter fourth score:";
  080 cout << endl;
  081 cin >> num4;
  082 cout << endl;
  083 return;
  084
}
085 void get_average(double& num1, double& num2, double& num3, double& num4,
                     double& avg) 086 {
  087 avg = num1 + num2 + num3 + num4;  // formula to calculate average
  088 avg = avg / 4;                    // final step to get average
  089 return;
  090
}
091 void get_standard_deviation(double& num1, double& num2, double& num3,
                                double& num4, double& avg, double& sd,
                                double& vr) 092 {
  093 num1 = num1 - avg;
  094 num1 = pow(num1, 2);  //  deviation for score 1
  095 num2 = num2 - avg;
  096 num2 = pow(num2, 2);  // deviation for score 2
  097 num3 = num3 - avg;
  098 num3 = pow(num3, 2);  // deviation for score 3
  099 num4 = num4 - avg;
  100 num4 = pow(num4, 2);             // deviation for score 4
  101 vr = num1 + num2 + num3 + num4;  // calculation for variance part 1
  102 vr = vr / 4;                     // step to to get variance
  103 sd =
      sqrt(vr);  // calculation of standard deviation is square root of variance
  104 cout << endl;
  105 return;
  106
}
107 void output_standard(double num1, double num2, double num3, double num4,
                         double avg, double sd, double vr) 108 {
  109 cout << endl;
  110 cout << "The Standard devation is: "
           << sd;  // final out for standard deviation
  111 cout << endl;
  112 cout << "How:";  // basically shows steps to how the program got stanard
                       // deviation
  113 cout << endl;
  114

      115 cout
      << endl;
  116 cout << "Average is: " << avg;  // output average
  117 cout << endl;
  118 cout << "Devations are: ";
  119 cout << "(" << num1 << " + " << num2 << " + " << num3 << " + " << num4
           << ") / 4";  // out put of deviations
  120 cout << endl;
  121 cout << "Variance is: " << vr;  // out put of variance
  122 cout << endl;
  123 cout << "Finally squareroot the variance and you get: "
           << sd;  // output of standard deviation again
  124 cout << endl;
  125 cout << "<END>";
  126 cout << endl;
  127
}
