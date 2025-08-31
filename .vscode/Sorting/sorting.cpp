#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for (int  i = 0; i <=n-2; i++)
    {
        int min=i;
        for (int j = i; j <=n-1; j++)
        {
            if(arr[j] < arr[min]){
                min=j;
            }
        }
        swap(arr[min], arr[i]);
        
    }
    
}

void bubble_sort(int arr[],int n){
    for (int i = n-1; i >=0; i--)
    {
        int didswap=0;
        for (int j = 0; j <i; j++){
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                didswap=1;
            }
            
        }
        if (didswap==0)
        {
            break;
        }
        cout<<"run\n";
        
    }
    
}


void insertion_sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1], arr[j]);

            j--;
        }
        
    }
    
} 

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //selection_sort(arr, n);
    //bubble_sort(arr, n);
    insertion_sort(arr, n);

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}