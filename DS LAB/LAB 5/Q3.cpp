#include<iostream>
using namespace std;

int main()
{
    int m=0;
    int n=0;
    cout<<"Enter size of the matrix in rows and columns (m*n):"<<endl;
    cin>>m>>n;
    int inp_matrix[m][n];
    int count_zero=0;
    cout<<"Enter the values for the input matrix to be checked:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j< n; j++)
        {
            cin>>inp_matrix[i][j];
            if(inp_matrix[i][j]==0){
                count_zero++;
            }
        }
    }

    if(count_zero>((m*n)/2)){
        cout<<"Matrix entered is sparse!!"<<endl;
        cout<<"The triplet representation of the given matrix will be:"<<endl;
        int trip_mat[(m*n)-count_zero][3];
        int k=0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(inp_matrix[i][j]!=0){
                    trip_mat[k][0]=i;
                    trip_mat[k][1]=j;
                    trip_mat[k][2]=inp_matrix[i][j];
                    k++;
                }trip_mat[k][3]=inp_matrix[i][j];
            }
        }
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<trip_mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    else{
        cout<<"Matrix entered is not sparse!!"<<endl;
        return 0;
    }
    return 0;
}
