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
        if (input == -2)
        {
            break;
        }
        else if (input == -1)
        {
            std::cout << "output: ";
            for (int l = 0; l < db.size(); l++)
            {
                std::cout << db[l] << " ";
            }
            std::cout << "\n";
            i--;
        }
        else
        {
            if (i < 20)
            {
                db.push_back(input);
            }
            else
            {
                shift_vector(db);
                db.push_back(input);
            }
        }
        
        
    }
}

void shift_vector(std::vector<int>& db)
{
    for (int i = 1; i < db.size(); i++)
    {
        db[i-1] = db[i];
    }
    db.pop_back();
}
