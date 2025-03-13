#include<iostream>
int searcharray( int array[] , int size, int element);
int main()
{
 int numbers[]={1,2,3,4,5,6,7,8,9,10} ;
 int size = sizeof(numbers)/sizeof(numbers[0]) ;
 int index;
 int mynum;
 std::cout<< "enter the number u want to search\n";
 std::cin>> mynum;
 index = searcharray(numbers , size , mynum);
 if(index != -1)
 {
    std::cout << mynum << "is at" << index ;
 }
 else {
    std::cout << "my number is not in array";
 }
return 0;

}
int searcharray( int array[] , int size, int element){
for(int i = 0 ; i < size ; i++ )
{
    if(array[i] == element)
    {
        return i;
    }
}
return -1 ;
}









//we have to tmatch searcharrays parameters with our main function