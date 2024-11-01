//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> createUniqueArray(const vector<int>& A, const vector<int>& B) {
//    vector<int> C;
//    for (int i = 0; i < A.size(); ++i) {
//        bool found = false;
//        for (int j = 0; j < B.size(); ++j) {
//            if (A[i] == B[j]) {
//                found = true;
//                break;
//            }
//        }
//        if (!found && find(C.begin(), C.end(), A[i]) == C.end()) {
//            C.push_back(A[i]);
//        }
//    }
//    return C;
//}
//
//int main() {
//    int M, N;
//    cout << "Enter the size of array A: ";
//    cin >> M;
//    cout << "Enter the size of array B: ";
//    cin >> N;
//
//    vector<int> A(M), B(N);
//    cout << "Enter elements of array A:" << endl;
//    for (int i = 0; i < M; ++i) {
//        cin >> A[i];
//    }
//
//    cout << "Enter elements of array B:" << endl;
//    for (int i = 0; i < N; ++i) {
//        cin >> B[i];
//    }
//
//    vector<int> C = createUniqueArray(A, B);
//
//    cout << "Array C (elements of A not in B):" << endl;
//    for (int i = 0; i < C.size(); ++i) {
//        cout << C[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}




//bool isInArray(int element, const int array[], int size) {
//    for (int i = 0; i < size; ++i) {
//        if (array[i] == element) {
//            return true;
//        }
//    }
//    return false;
//}
//
//bool isInArrayWithoutDuplicates(int element, const int array[], int size) {
//    for (int i = 0; i < size; ++i) {
//        if (array[i] == element) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    int M, N;
//    cout << "Enter the size of array A: ";
//    cin >> M;
//    cout << "Enter the size of array B: ";
//    cin >> N;
//
//    int A[M], B[N], C[M + N];
//    int CSize = 0;
//
//    cout << "Enter elements of array A:" << endl;
//    for (int i = 0; i < M; ++i) {
//        cin >> A[i];
//    }
//
//    cout << "Enter elements of array B:" << endl;
//    for (int i = 0; i < N; ++i) {
//        cin >> B[i];
//    }
//
//    for (int i = 0; i < M; ++i) {
//        if (!isInArray(A[i], B, N) && !isInArray(A[i], C, CSize)) {
//            C[CSize++] = A[i];
//        }
//    }
//
//    for (int i = 0; i < N; ++i) {
//        if (!isInArray(B[i], A, M) && !isInArray(B[i], C, CSize)) {
//            C[CSize++] = B[i];
//        }
//    }
//
//    cout << "Array C (unique elements from A and B):" << endl;
//    for (int i = 0; i < CSize; ++i) {
//        cout << C[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}







//int* allocateArray(int size) {
//    return new int[size];
//}
//
//
//
//
//
//void initializeArray(int* array, int size, int value) {
//    for (int i = 0; i < size; ++i) {
//        array[i] = value;
//    }
//}
//
//
//
//
//
//void printArray(int* array, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//
//
//
//
//
//void deleteArray(int* array) {
//    delete[] array;
//}
//
//
//
//
//
//int* addElement(int* array, int& size, int element) {
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < size; ++i) {
//        newArray[i] = array[i];
//    }
//    newArray[size] = element;
//    size++;
//    delete[] array;
//    return newArray;
//}
//
//
//
//
//
//int* insertElement(int* array, int& size, int element, int index) {
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < index; ++i) {
//        newArray[i] = array[i];
//    }
//    newArray[index] = element;
//    for (int i = index; i < size; ++i) {
//        newArray[i + 1] = array[i];
//    }
//    size++;
//    delete[] array;
//    return newArray;
//}
//
//
//
//
//
//int* removeElement(int* array, int& size, int index) {
//    int* newArray = new int[size - 1];
//    for (int i = 0; i < index; ++i) {
//        newArray[i] = array[i];
//    }
//    for (int i = index + 1; i < size; ++i) {
//        newArray[i - 1] = array[i];
//    }
//    size--;
//    delete[] array;
//    return newArray;
//}
//
//int main() {
//    int size = 5;
//    int* array = allocateArray(size);
//
//    initializeArray(array, size, 0);
//    printArray(array, size);
//
//    array = addElement(array, size, 10);
//    printArray(array, size);
//
//    array = insertElement(array, size, 20, 2);
//    printArray(array, size);
//
//    array = removeElement(array, size, 3);
//    printArray(array, size);
//
//    deleteArray(array);
//    return 0;
//}






//bool isPrime(int num) {
//    if (num <= 1) return false;
//    for (int i = 2; i <= num / 2; ++i) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//int* removePrimes(int* array, int size, int& newSize) {
//    int* tempArray = new int[size];
//    newSize = 0;
//    for (int i = 0; i < size; ++i) {
//        if (!isPrime(array[i])) {
//            tempArray[newSize++] = array[i];
//        }
//    }
//    int* newArray = new int[newSize];
//    for (int i = 0; i < newSize; ++i) {
//        newArray[i] = tempArray[i];
//    }
//    delete[] tempArray;
//    return newArray;
//}
//
//int main() {
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//
//    int* array = new int[size];
//    cout << "Enter the elements of the array:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cin >> array[i];
//    }
//
//    int newSize;
//    int* newArray = removePrimes(array, size, newSize);
//
//    cout << "Array without prime numbers:" << endl;
//    for (int i = 0; i < newSize; ++i) {
//        cout << newArray[i] << " ";
//    }
//    cout << endl;
//
//    delete[] array;
//    delete[] newArray;
//
//    return 0;
//}
