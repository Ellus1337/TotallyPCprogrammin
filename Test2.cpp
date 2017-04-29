#include <iostream>
using namespace std;
int main ()
{
    cout << "hej på dig jao, äru man eller kvinna?";
    string kön;
    cin >> kön;
Label:
    if (kön == "man" || kön == "Man") {
    float snopp;
    int n;
    cout << "hur många gånger vill du bli objektifierad?";
    cin >> n;
    for (int a=n; n>0; n--) {
    cout << "hur stor är snopp" << endl;
    cin >> snopp;
    string response;
    response = snopp<24 ? "du är sämst" : "ligga?";
    cout << response << endl;
}
}
    else if (kön == "kvinna" || kön == "Kvinna") {
    cout << "du e ful" << endl;
}
    else {
    cout << "är du retarded, skriv igen din jävel (obs inte funkofob)";
    cin >> kön;
    goto Label;
    }
}