#include <iostream>

int main(int argc, const char **argv)
{
    int curr_val = 0, val = 0, cnt = 0;

    if (std::cin >> curr_val)
    {
        cnt = 1;
        while (std::cin >> val)
        {
            if (curr_val == val)
                cnt++;
            else
            {
                std::cout << "curr val = " << curr_val << "cnt = " << cnt << std::endl;

                curr_val = val;
                cnt = 1;
            }
        }

    }
        std::cout << "curr val = " << curr_val << "cnt = " << cnt << std::endl;

    return 0;
}