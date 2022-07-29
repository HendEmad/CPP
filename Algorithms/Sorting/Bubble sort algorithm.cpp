 #include<bits/stdc++.h>
using namespace std;

//algorithm function
void bubbleSort(int arr[], int n) //n is the size of the array
{
    //boolean variable to check if the swap operation is done or not
    bool flag = true;
    //int variable to check no of passes, if greater than n, then it operated on more than one pass
    int cnt = 0;
    //loop for passes calculating; no.of passess = n - 1
    for(int i =0; i < n-1; i++){
        //loop for the array iteration (size of iteration decreases after each loop by 1 element)
        for(int j = 0; j < n-i-1; j++){
            //check through each element to its next one if it is greater or not
            if(arr[j] > arr[j+1]){ // '<' for descending order
              //if greater, swap them
              swap(arr[j], arr[j+1]);
              flag = false;
            }
            cnt++;
        }
        //if condition to check if the swap operation is done or not
        if(flag == true)
            //no swap is done
            break;
    }
    cout << "# of rounds = " << cnt << endl;
}

//function to print the elements of the array
void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {100, 60, 20, 50, 30, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    print(arr, n);

    return 0;
}
