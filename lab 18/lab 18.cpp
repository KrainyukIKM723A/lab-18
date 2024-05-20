#include <iostream> 

using namespace std;



class Matrix {

private:

    static const int SIZE = 8;

    int data[SIZE];



public:

    Matrix() {

        for (int i = 0; i < SIZE; ++i) {

            data[i] = 0;

        }

    }

    Matrix(int arr[SIZE]) {

        for (int i = 0; i < SIZE; ++i) {

            data[i] = arr[i];

        }

    }

    Matrix operator+(const Matrix& other) const {

        Matrix result;

        for (int i = 0; i < SIZE; ++i) {

            result.data[i] = this->data[i] + other.data[i];

        }

        return result;

    }

    Matrix operator-(const Matrix& other) const {

        Matrix result;

        for (int i = 0; i < SIZE; ++i) {

            result.data[i] = this->data[i] - other.data[i];

        }

        return result;

    }

    bool operator==(const Matrix& other) const {

        for (int i = 0; i < SIZE; ++i) {

            if (this->data[i] != other.data[i]) {

                return false;

            }

        }

        return true;

    }

    void print() const {

        for (int i = 0; i < SIZE; ++i) {

            cout << data[i] << " ";

        }

        cout << endl;

    }

};



int main() {

    int arr1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    int arr2[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };



    Matrix matrix1(arr1);

    Matrix matrix2(arr2);



    Matrix resultAdd = matrix1 + matrix2;

    cout << "Result of addition: ";

    resultAdd.print();



    Matrix resultSub = matrix1 - matrix2;

    cout << "Result of subtraction: ";

    resultSub.print();



    bool isEqual = matrix1 == matrix2;

    cout << "Matrices are " << (isEqual ? "equal" : "not equal") << endl;



    return 0;

}