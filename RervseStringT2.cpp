#include <fstream>

int main() {
    std::ifstream in;
    in.open("Input.txt")
        // Fixed size array used to store the elements in the text file.
        // Change array type according to the type of the elements you want to read from the file
        int v[5];
    int element;

    if (in.is_open()) {
        int i = 0;
        while (in >> element) {
            v[i++] = element;
        }
    }

    in.close();

    return 0;
}