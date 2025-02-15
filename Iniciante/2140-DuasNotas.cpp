#include <iostream>

int main()
{
	const static int nts[]{ 2, 5, 10, 20, 50, 100 };
	int n, m;
	std::cin >> n >> m;
	while (n != 0 && m != 0)
	{
		int t = m - n;
        bool p = false;

        for (int i = 0; i < 6; ++i)
        {
            for (int j = i + 1; j < 6; ++j)
            {
                if (nts[i] + nts[j] == t)
                {
                    p = true;
                    break;
                }
            }
            if (p) break;
        }

        if (p)
            std::cout << "possible\n";
        else
            std::cout << "impossible\n";

		std::cin >> n >> m;
	}
}