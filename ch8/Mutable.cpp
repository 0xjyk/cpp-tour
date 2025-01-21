// The "Mutable" keyword

class Z {
    int i; 
    mutable int j; 
public: 
    Z(); 
    void f() const;
};

Z::Z() : i(0), j(0) {}

void Z::f() const {
    //! i++; // Error -- const member function 
    j++; // OK: mutable
}

int main() {
    const Z zz; 
    zz.f(); // Changes data member i even though zz is const qualified
}
