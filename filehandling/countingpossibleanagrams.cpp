// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     string s;
//     string pattern;
//     cout << "Enter the String" << endl;
//     cin >> s;
//     cout << "Enter the pattern" << endl;
//     cin >> pattern;
//     map<char, int> mp;
//     int i = 0;
//     int k = pattern.length();
//     int j = 0;
//     for (char ch2 : pattern)
//     {
//         mp[ch2]++;
//     }
//     // for (const auto &pairing : mp)
//     // {
//     //     cout << pairing.first << " " << pairing.second;
//     //     cout << endl;
//     // }
//     // cout << endl;

//     int ans = 0;
//     int count = mp.size();
//     // cout << count << endl;

//     while (j < s.length())
//     {
//         char ch = s[j];
//         if (mp.find(ch) != mp.end())
//         {
//             mp[ch] -= 1;
//         }
//         if (mp[ch] == 0)
//             count--;
//         // cout << "the value of count before achieveing full k size window =" << count << endl;

//         if (j - i + 1 < k)
//         {
//             j++;
//         }
//         else if (j - i + 1 == k)
//         {
//             // cout << "the value of count after achieveing sliding window=" << count << endl;
//             // for (const auto &pairing : mp)
//             // {
//             //     cout << pairing.first << " " << pairing.second;
//             //     cout << endl;
//             // }
//             if (count == 0)
//                 ans++;

//             if (mp.find(s[i]) != mp.end())
//             {
//                 mp[s[i]]++;
//                 count++;
//             }
//             i++;
//             j++;
//         }
//     }
//     cout << "the value of possible anagrams is="
//          << " " << ans << endl;
// }

#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    string pattern;
    cout << "Enter the String" << endl;
    cin >> s;
    cout << "Enter the pattern" << endl;
    cin >> pattern;

    map<char, int> mp;
    int i = 0;
    int k = pattern.length();
    int j = 0;

    // Initialize the map with characters and their counts from the pattern.
    for (char ch2 : pattern)
    {
        mp[ch2]++;
    }

    int ans = 0;
    int count = mp.size(); // Initialize count to the number of unique characters in the pattern.

    while (j < s.length())
    {
        char ch = s[j];
        if (mp.find(ch) != mp.end())
        {
            mp[ch]--;

            if (mp[ch] == 0)
            {
                count--;
            }
        }

        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (count == 0)
            {
                ans++;
            }

            char removedChar = s[i];
            if (mp.find(removedChar) != mp.end())
            {
                if (mp[removedChar] == 0)
                {
                    count++; // an important logic
                }
                mp[removedChar]++;
            }

            i++;
            j++;
        }
    }

    cout << "The value of possible anagrams is: " << ans << endl;
}
