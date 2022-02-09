#pragma once
#include <iostream>

/*******************************************************************************************************************************************************************************\
* You've probably used arrays before, if not:																																	*
* "An array is a collection of similar data elements stored at contiguous memory locations." - https://www.mygreatlearning.com/blog/what-is-an-array-learn-more-in-one-read/	*
* At beginner levels we learn to use arrays in order to store and access data quickly. *Example 1*																				*
\*******************************************************************************************************************************************************************************/

// *Example 1 - store and access data quickly*:
// FYI - If you are not used to using namespaces, they're straight forward.
// In order to use namespaces while executing code, use the namespace as a precursor before the function that recides within. 
// (I.E.: 
//			arrayExamples::example1::presetRun();
// will run the function presetRun(), found under the namespaces arrayExamples, example1)
namespace arrayExamples {

	namespace exampleA {

		template <typename T>
		void print_all(T arr[], int size) {		// a function that takes an array aswell as its size as parameters.
												// Be careful when taking in parameters of size, because you could end up reading out of bounds, 
												// meaning that you've surpassed the contiguous memory locations you got when creating the array.
			for (int i{}; i < size; i++) {
				std::cout << arr[i] << " ";		// prints out the value stored in the array at the index of i, with a spaces in between.
			}
		}

		void presetRun() {
			int anArray[5]{ 1,3,5,7,9 };
			int size = sizeof(anArray) / sizeof(anArray[0]);

			print_all(anArray, size);
		}
	}

	namespace exampleB {
		// to be continued
	}
}
