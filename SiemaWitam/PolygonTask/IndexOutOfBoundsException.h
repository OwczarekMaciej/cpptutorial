#ifndef INDEXOUTOFBOUNDSEXCEPTION_H
#define INDEXOUTOFBOUNDSEXCEPTION_H


class IndexOutOfBoundsException : public std::exception {
public:
    IndexOutOfBoundsException() noexcept = default;
    ~IndexOutOfBoundsException() = default;
    virtual const char *what() const noexcept
    {
        return "Index out of bounds";
    }
};

#endif // INDEXOUTOFBOUNDSEXCEPTION_H