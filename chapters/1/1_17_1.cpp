#include <iostream>

int main(int argc, const char **argv)
{
<<<<<<< HEAD
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
=======
    /* curr_val: the number we are counting. new_val: we'll read new values into val. */
    int curr_val = 0, new_val = 0, cnt = 0;

    if (std::cin >> curr_val)
    {
        /* store the count for the curr_val.*/
        cnt = 1;

        /* read the remaining numbers. */
        while (std::cin >> new_val)
        {
            if (curr_val == new_val)
                ++cnt;
            else
            {
                std::cout << "current val =" << curr_val << "  cnt = " << cnt << std::endl;

                /* remember the new value and reset the counter. */
                curr_val = new_val;
                cnt = 1;
            }
        }
        std::cout << "curr val is " << curr_val << "cnt is " << cnt << std::endl;
    }
>>>>>>> 4c5ef48a3da89c7182449f0937419ff0509c382c

    return 0;
}