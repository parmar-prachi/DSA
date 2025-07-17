// Q1

#include <iostream>
using namespace std;
int main()
{
    int i, j, current = 1;
    // Q1
    cout << "Question-1 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q2
    cout << "Question-2 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q3
    cout << "Question-3 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            cout << "  ";
        }
        for (j = i; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q4
    cout << "Question-4 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q5
    cout << "Question-5 :" << endl;
    cout << endl;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << "------------" << endl;
    cout << endl;
    // Q6
    cout << "Question-6 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q7
    cout << "Question-7 :" << endl;
    cout << endl;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q8
    cout << "Question-8 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q9
    cout << "Question-9 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q10
    cout << "Question-10 :" << endl;
    cout << endl;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q11
    cout << "Question-11 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q12
    cout << "Question-12 :" << endl;
    cout << endl;
    int n = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q13
    cout << "Question-13 :" << endl;
    cout << endl;
    int num;

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            if (j % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q14
    cout << "Question-14 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {

            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q15
    cout << "Question-15 :" << endl;
    cout << endl;

    for (i = 0; i < 5; i++)
    {
        for (int k = 0; k <= 5 - i; k++)
        {
            cout << " ";
        }
        int num = 1;
        for (j = 0; j <= i; j++)
        {

            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q16
    cout << "Question-16 :" << endl;
    cout << endl;
    int numb = 1;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 0; k < 5 - i; k++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || i == 2 || i == 3 || i == 4)
            {
                cout << "  ";
            }
            else if (i == 5)
            {
                cout << " ";
            }
            cout << numb << " ";
            numb++;
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q17
    cout << "Question-17 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "1 ";
            }
            else if (j == i || i == 5)
            {

                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q18
    cout << "Question-18 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q19
    cout << "Question-19 :" << endl;
    cout << endl;
    for (i = 1; i < 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q20
    cout << "Question-20 :" << endl;
    cout << endl;
    for (i = 1; i < 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q21
    cout << "Question-21 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "1 ";
            }
            else if (j == i || i == 5)
            {

                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q22
    cout << "Question-22 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q23
    cout << "Question-23 :" << endl;
    cout << endl;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || i == 7 || j == 7)
            {
                cout << "4 ";
            }
            else if (j == 2 || i == 2 || i == 6 || j == 6)
            {
                cout << "3 ";
            }
            else if (i == 3 || i == 5 || j == 5 || j == 3)
            {
                cout << "2 ";
            }
            else if (i == 4 || j == 4)
            {
                cout << "1 ";
            }
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q24
    cout << "Question-24 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (j = 2; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q25
    cout << "Question-25 :" << endl;
    cout << endl;

    int numbe = 1;

    for (i = 1; i <= 5; i++)
    {
        if (i < 5)
        {
            for (j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    cout << "1 ";
                }
                else if (j == i)
                {
                    numbe += 2;
                    cout << numbe << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        else
        {

            int temp = 1;
            for (j = 1; j <= 5; j++)
            {
                cout << temp << " ";
                temp += 2;
            }
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q26
    cout << "Question-26 :" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i == 1 || j == 1 || i == 4 || j == 4)
            {
                cout << "1 ";
            }
            else if (j == 2 || i == 2 || i == 3)
            {
                cout << "2 ";
            }
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q27
    cout << "Question-27 :" << endl;
    cout << endl;
    int tm = 1;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << tm << " ";
            tm++;
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q28
    cout << "Question-28 :" << endl;
    cout << endl;
    for (i = 1; i <= 4; i++)
    {
        for (int k = 4; k > i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << current << " ";
            current++;
        }
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        n = i * (i - 1) / 2 + 1;
        for (int k = 1; k <= 4 - i; k++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q29
    cout << "Question-29 :" << endl;
    cout << endl;
    for (i = 1; i <= 4; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q30
    cout << "Question-30 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q31
    cout << "Question-31 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q32
    cout << "Question-32 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "* ";
            }
            else if (j == i || i == 5)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q33
    cout << "Question-33 :" << endl;
    cout << endl;

    cout << "   ";
    for (int i = 0; i < 3; i++)
    {
        cout << "*  ";
    }
    cout << endl;

    cout << " ";
    for (int i = 0; i < 6; i++)
    {
        cout << "* ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "*   ";
    }
    cout << endl;

    cout << "------------" << endl;
    cout << endl;
    // Q34
    cout << "Question-34 :" << endl;
    cout << endl;

    for (i = 0; i < 5; i++)
    {
        for (int k = 4; k > i; k--)
        {
            cout << " ";
        }

        for (j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (i = 3; i >= 0; i--)
    {

        for (int k = 0; k < 5 - i - 1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q35
    cout << "Question-35 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "* ";
            }
            else if (j == i || i == 5)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q36
    cout << "Question-36 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == i || j == 5 - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q37
    cout << "Question-37 :" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (int k = 4; k > i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        for (int k = 1; k <= 4 - i; k++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q38
    cout << "Question-38 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {

            if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q39
    cout << "Question-39 :" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q40
    cout << "Question-40 :" << endl;
    cout << endl;
    for (i = 0; i < 5; i++)
    {
        char ch = 'E' - i;
        for (char j = ch; j >= 'A'; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q41
    cout << "Question-41 :" << endl;
    cout << endl;

    char ch = 'A';

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q42
    cout << "Question-42 :" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q43
    cout << "Question-43 :" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (int k = 4; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 0; j < i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << " ";
        }
        for (j = 0; j < i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q44
    cout << "Question-44 :" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (int k = 1; k <= 4 - i; k++)
        {
            cout << "  ";
        }

        char ch = 'A';
        for (j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }

        ch -= 2;
        for (j = 1; j < i; j++)
        {
            cout << ch << " ";
            ch--;
        }

        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q45
    cout << "Question-45 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "A ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q46
    cout << "Question-46 :" << endl;
    cout << endl;

    char ch1 = 'E';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << ch1 << " ";
        }
        ch1--;
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q47
    cout << "Question-47 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q48
    cout << "Question-48 :" << endl;
    cout << endl;

    for (i = 0; i < 5; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (j = 0; j < 2 * (5 - i) - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q49
    cout << "Question-49 :" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q50
    cout << "Question-50 :" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        // Left
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (5 - i); k++)
        {
            cout << " ";
        }
        // right
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 5 - 1; i >= 1; i--)
    {
        // left
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (5 - i); k++) // 2 * (5 - 5) = 0 - no spaces are printed
        {
            cout << " ";
        }
        // right
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q51
    cout << "Question-51 :" << endl;
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 3)
            {
                cout << "* ";
            }
            else if (j == 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q52
    cout << "Question-52 :" << endl;
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        int no = 2;
        for (int j = 1; j <= i; j++)
        {
            cout << no << " ";
            no += 2;
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q53
    cout << "Question-53 :" << endl;
    cout << endl;

    for (i = 1; i <= 3; i++)
    {
        int k = 6 - 2 * i;
        for (int s = 1; s <= k; s++)
            cout << " ";

        for (j = 1; j <= 2 * i; j++)
            cout << "*";

        int gap = (i == 3) ? 0 : (4 - i); // Center gap
        for (int g = 1; g <= gap; g++)
            cout << " ";

        if (i != 3)
        {
            for (j = 1; j <= 2 * i; j++)
                cout << "*";
        }
        else
        {
            for (j = 1; j <= 2 * i; j++)
                cout << "*";
        }

        cout << endl;
    }
    int stars = 7;

    for (i = 0; i < 4; i++)
    {
        for (int s = 0; s < i * 2; s++)
        {

            cout << " ";
        }
        for (j = 0; j < stars; j++)
        {

            cout << "*";
        }

        stars -= 2;

        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q54
    cout << "Question-54 :" << endl;
    cout << endl;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i == j)
                cout << i + 1 << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q55
    cout << "Question-55 :" << endl;
    cout << endl;

    int n1 = 0;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << n1 << " ";

            if (n1 == 0)
            {
                n1 = 1;
            }

            else
            {
                n1 += 2;
            }
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q56
    cout << "Question-56 :" << endl;
    cout << endl;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if (i % 2 == 0) // row is even then print # 
            {
                cout << "# ";
            }
            else
            {
                cout << "@ ";
            }
        }
        cout << endl;
    }
    cout << "------------" << endl;
    cout << endl;
    // Q57
    cout << "Question-57 :" << endl;
    cout << endl;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if (j % 2 == 1) // column is odd then print +
            {
                cout << "+ ";
            }
            else
            {
                cout << "- ";
            }
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q58
    cout << "Question-58 :" << endl;
    cout << endl;

    for ( i = 1; i <= 4; i++)
    {
        int count = 4 - i + 1; // 4 - 1 + 1 = 4 times , 4 - 2 + 1 = 3 times......

        for (int j = 1; j <= count; j++)
        {
            if (i == 1)
                cout << "1331 ";
            else if (i == 2)
                cout << "121 ";
            else if (i == 3)
                cout << "11 ";
            else
                cout << "1 ";
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << endl;
    // Q59
    cout << "Question-59 :" << endl;
    cout << endl;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            cout << "RW" << i << " ";
        }
        cout << endl;
    }

    return 0;

}