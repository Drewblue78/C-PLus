

cout << MENU;
int choice;
cin >> choice;
switch (choice) {
  case 1:
    giveImperial();
    break;
  case 2:
    giveMetric();
    break;
}
cout << "Again?";
string res;
cin >> res;
keepGoing = tolower(res[0]) == 'y';
}
while (keepGoing)
  ;