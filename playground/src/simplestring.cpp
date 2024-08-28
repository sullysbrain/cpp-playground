#include <cstdio>
#include <cstring>
#include <stdexcept>

struct SimpleString {
    SimpleString(size_t max_size) 
        : max_size{ max_size },
          length{} {
        if (max_size == 0) {
            throw std::runtime_error{ "Max size must be at least 1." };
        }
        buffer = new char[max_size];
        buffer[0] = 0;
    }

    ~SimpleString() {
        delete[] buffer;
    }

    void print(const char* tag) const {
        printf("%s: %s", tag, buffer);
    }

    bool append_line(const char* x) {
        const auto x_len = strlen(x);
        if (x_len + length + 2 > max_size) return false;
        std::strncpy(buffer + length, x, max_size - length);
        length += x_len;
        buffer[length++] = '\n';
        buffer[length] = 0;
        return true;
    }

    private:
        size_t max_size;
        size_t length;
        char* buffer;      
};

// Added line
struct SimpleStringOwner {
    SimpleStringOwner(const char* x)
        : string{ 10 } {
        if (!string.append_line(x)) {
            throw std::runtime_error{ "Not enough memory" };
        }
        string.print("Constructed");
    }

    ~SimpleStringOwner() {
        string.print("About to destroy");
    }

    private:
        SimpleString string;
};

int main() {
    SimpleStringOwner x{ "x" };
    printf("x is alive\n");


    // SimpleString str{ 10 };
    // str.append_line("Starbuck, whaddya hear?");
    // str.append_line("Nothin' but the rain.");
    // str.print("A");
    // str.append_line("Grab your gun and bring the cat in.");
    // str.append_line("Aye-aye sir, coming home.");
    // str.print("B");
    // if (!str.append_line("Galactica!")) {
    //     printf("String was not big enough to append another message.");
    // }

}