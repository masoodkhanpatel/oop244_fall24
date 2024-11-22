// Template for swap
// swap.h

template<typename T>
void swap(T& a, T& b) {
	T c; // temporary variable
    c = a;
    a = b;
    b = c;
}