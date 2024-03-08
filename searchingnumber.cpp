#include<iostream>
#include<array>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
  int findingnumber;
  int arr[10];

  for (int i = 0; i < 10; i++)
  {
    arr[i] = rand() % 3;
  }
  cout<<"Enter The Number To Find In The \"ARRAY\""<<endl;
  for(int i = 0 ; i < 10 ; i++){
    cin>>findingnumber;
    if(findingnumber == arr[i]){
      cout<<"The Number Is Present In The Array At \"INDEX\" "<<i<<endl;
    }
    else{
      cout<<"The Number is not found at any index"<<endl;
    }
  }
return 0;  
}
