
void func(int) {}

int main() {
    int i = 0x7fff; 
    long l; 
    float f; 

    // typical castless conversions: 
    l = i;
    f = i; 
    // also works: 
    l = static_cast<long>(i); 
    f = static_cast<float>(i); 

    // narrowing conversions: 
    i = l; 
    i = f;
    // says "i know" eliminates warnings 
    i = static_cast<int>(l); 
    i = static_cast<int>(f); 
    char c = static_cast<char>(i); 

    // forcing conversion from void *: 
    void *vp = &i; 
    // old way produces a dangerous conversion: 
    float *fp = (float *)vp; 
    // the new way is equally dangerous: 
    fp = static_cast<float *>(vp); 

    // implicit type conversion, normally 
    // performed by the compiler: 
    double d = 0.0; 
    int x = d; 
    x = static_cast<int>(d); 
    func(d); 
    func(static_cast<int>(d)); 
}

