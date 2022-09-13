#include <iostream>
#include <vector>

void shift_vector(std::vector<int>&);

int main()
{
    int input;
    std::vector<int> db;

    for (int i = 0;; i++)
    {
        if (i == 20) i = 19;
        std::cout << "input number: ";
        std::cin >> input;
        if (input == -2) break;
        if (input == -1)
        {
            std::cout << "output: ";
            for (int l = 0; l < db.size(); l++)
            {
                std::cout << db[l] << " ";
            }
            std::cout << "\n";
            i--;
            input = db[i];
        }
        db.push_back(input);
        
    }
}

void shift_vector(std::vector<int>& db)
{
    for (int i = 1; i < db.size(); i++)
    {
        db[i] = db[i - 1];
    }
}
