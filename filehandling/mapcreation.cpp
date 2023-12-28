#include <iostream>
#include <map>

int main()
{
    std::string str = "jigyashamalyan";
    std::map<char, int> charCount;

    for (char c : str)
    {
        if (charCount.find(c) != charCount.end())
        {
            charCount[c]++;
        }
        else
        {
            charCount[c] = 1;
        }
    }

    // Printing the character counts
    for (const auto &pair : charCount)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
