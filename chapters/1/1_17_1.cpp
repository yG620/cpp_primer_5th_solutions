#include <iostream>

int main(int argc, const char **argv)
{
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

    return 0;
}