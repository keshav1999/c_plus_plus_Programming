#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == N / 2)
			{
				cout << "*";
			}
			if (i < N / 2)
			{
				if (j == N / 2)
				{
                    cout<<"*";
				}
				if(j>N/2)
					{
						for (int k=0;k<i;k++)
							cout<<"*";
					}
					if(j<N/2)
					{
						for(int l=0;l<=(i+N/2-1);l++)
							cout<<" ";
						
					}
					
				

			}
			if (i > N / 2)
			{

			}
		}



		cout << endl;
	}
}