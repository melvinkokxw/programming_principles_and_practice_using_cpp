#include "../../std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;

    cout << "Enter the name of another friend (followed by enter):\n";
    string friend_name;
    cin >> friend_name;

    char friend_sex = '0';
    cout << "Enter gender of friend (m/f):\n";
    cin >> friend_sex;

    cout << "Enter age of recipient (1-109):\n";
    int age;
    cin >> age;

    if (age <= 0 || age >= 110)
    {
        simple_error("you're kidding!");
    }

    string friend_pronoun = "it";
    if (friend_sex == 'm')
    {
        friend_pronoun = "him";
    }
    else if (friend_sex == 'f')
    {
        friend_pronoun = "her";
    }

    cout << "Dear " << first_name << ",\n"
         << "How are you? I am fine. I miss you. "
         << "Have you seen " << friend_name << " recently? "
         << "If you see " << friend_name << " please ask " << friend_pronoun << " to call me. \n";
    
    if (age < 12)
    {
        cout << "Next year you will be " << age+1 << ". \n";
    }
    else if (age == 17)
    {
        cout << "Next year you will be able to vote. \n";
    }
    else if (age > 70)
    {
        cout << "I hope you are enjoying retirement. \n";
    }

    cout << "Yours sincerely,\n\n\nMelvin\n";
}