#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter Number of Rows: ";
    cin  >> m;
    cout << "Enter Number of Columns: ";
    cin  >> n;
    
    int **arr = (int **)malloc(m*sizeof(int*));

    for (int i=0; i<m;i++){
        *(arr+i) = (int *)malloc(n*sizeof(int));
    }

    for(int i = 0; i<m ;i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << "Enter the [" << i+1 << "][" << j+1 << "] Element: ";
            cin  >> *(*(arr+i)+j);
        }
    }


    /*This following Algorithm would work only for Square Matrix*/
    
    // for(int i = 0; i<m ; i++)                        
    // {
    //     for(int j = 0; j<i ; j++)
    //     {
    //         int temp = *(*(arr+i)+j);
    //         *(*(arr+i)+j) = *(*(arr+j)+i);
    //         *(*(arr+j)+i) = temp;
    //     }
    // }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout << *(*(arr+j)+i) << " ";
        }
        cout << endl;
    }

    return 0;
}

