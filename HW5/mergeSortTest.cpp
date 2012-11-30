#include <iostream>
using namespace std;

void mergeSort(int* data, size_t size);

int main(){

int testArray[]={125, 456, 1, 0, -48, 66, 66};
for(int i=0; i<7; i++){

cout << testArray[i] << " ";

}
cout << endl;
mergeSort(testArray, 7);
for(int i=0; i<7; i++){

cout << testArray[i] << " ";

}

return 0;

}

void mergeSort(int* data, size_t size){
		
if(size>1){
			size_t leftS=size/2, rightS=size/2;
			if(size%2==1) ++leftS;
			int left[leftS], right[rightS];

			//copy
			size_t i=0;
			for(; i<leftS; i++){
			
				left[i]=data[i];
			
			}
			for(size_t j=0; j<rightS; j++){
			
				right[j]=data[i];
				i++;
			
			}

			//recursive
			mergeSort(left, leftS);
			mergeSort(right, rightS);

			//merge
			size_t leftI=0, rightI=0;
			i=0;
			for(; i<size && leftI<leftS && rightI<rightS; i++){
			
				if(left[leftI]<right[rightI]){
				
					data[i]=left[leftI];
					++leftI;
				
				}
				else{
				
					data[i]=right[rightI];
					++rightI;
				
				}
			
			}
			for(; i<size && leftI<leftS; i++){
				
					data[i]=left[leftI];
					leftI++;
			
			}
			for(; i<size && rightI<rightI; i++){
				
					data[i]=right[rightI];
					rightI++;
			
			}}
		
		}
