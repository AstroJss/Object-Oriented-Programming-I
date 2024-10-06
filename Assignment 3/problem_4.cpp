/*COEN 243 Assignment 3*
 *     Question 4      */

#include <iostream>
#include <array>
using namespace std;

//Function prototypes:
int det(const array<array<int, 2>, 2> &Det1);
void addArrays(const array<array<int, 2>, 2> &mat1, const array<array<int, 2>, 2> &mat2);


int main(void)
{
	array<array<int, 2>, 2> Det1;
	array<array<int, 2>, 2> Det2;


	cout<<"Enter a two-dimensional array(2x2) with 4 integers: ";
	for(int i=0; i<2; ++i)
		for(int j=0; j<2; ++j)
			cin>>Det1[i][j];  //storing the 4 integers entered in first array

	cout<<"The first 2x2 array that you entered is: \n";
	for(int i=0; i<2; ++i){
		for(int j=0; j<2; ++j)
			cout<<" "<<Det1[i][j];    //printing out the first array for user
		cout<<endl;
	}

	cout<<"\nThe determinant of the first array is: "<<det(Det1)<<endl<<endl; //printing out determinant using function
	cout<<"Enter another two-dimensional array(2x2) with 4 integers: "; //prompting the user to enter integers for second array

	for(int i=0; i<2; ++i)
			for(int j=0; j<2; ++j)
				cin>>Det2[i][j];    //storing integers entered in second array

	cout<<"The second 2x2 array that you entered is: \n";
		for(int i=0; i<2; ++i){
			for(int j=0; j<2; ++j)
				cout<<" "<<Det2[i][j];  //printing out the second array for user
			cout<<endl;
		}
	cout<<"\nThe determinant of the second array is: "<<det(Det2)<<endl<<endl; //printing out determinant using function
    cout<<"The sum of the 2 arrays entered is: \n";  //adding the two arrays
        addArrays(Det1, Det2);


}

int det(const array<array<int, 2>, 2> &Det1)
{
	return(Det1[0][0]*Det1[1][1] - Det1[0][1]*Det1[1][0]); //calculates and returns determinant of array

}

void addArrays(const array<array<int, 2>, 2> &arr1, const array<array<int, 2>, 2> &arr2)
{
	array<array<int, 2>, 2> Add;

	for(int i=0; i<2; ++i)
		for(int j=0; j<2; ++j)
			Add[i][j] = arr1[i][j] + arr2[i][j]; //adding two arrays

	for(int i=0; i<2; ++i){
			for(int j=0; j<2; ++j)
				cout<<" "<<Add[i][j];  //printing out two arrays
			cout<<endl;
	}
}

