#include <iostream>
#include <vector>

void shift_vector(std::vector<int>&);

int main()
{
    int input;
    std::vector<int> db;

    for (int i = 0;; i++)
    {
       
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
        if (i == 20 && input != -2 || input == -1)
        {
            shift_vector(db);
            i = 19;
        }
        db.push_back(input);
        
    }
}

void shift_vector(std::vector<int>& db)
{
    for (int i = 1; i < db.size(); i++)
    {
        db[i] = db[i - 1];
        db.pop_back();
    }
}
