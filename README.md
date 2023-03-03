Knuth Morris Pratt algorithm from the Boost's algorithm library

Added simpler C++ API

Compiled to JavaScript with Cheerp


### Recompile Instructions

1. Download and install cheerp
2. Download Boost libs - https://www.boost.org/users/download/
    1. Extract "Boost folder" to cheerp's include location
        - `C:\cheerp\include` on Windows
        - `/opt/cheerp/include` on Linux/MacOS
3. Run cheerp on `KnuthMorrisPratt.cpp`
    - `C:\cheerp\bin\clang++ -target cheerp .\KnuthMorrisPratt.cpp -O3 -o kmp.js` on Windows
    - `/opt/cheerp/bin/clang++ -target cheerp .\KnuthMorrisPratt.cpp -O3 -o kmp.js` on Linux.MacOS
    
#### Create module instead of IIFE installed global

- ES6 `C:\cheerp\bin\clang++ -target cheerp .\KnuthMorrisPratt.cpp -O3 -o kmp.js -cheerp-make-module=es6`
- CJS `C:\cheerp\bin\clang++ -target cheerp .\KnuthMorrisPratt.cpp -O3 -o kmp.js -cheerp-make-module=commonjs`
- Closure wrap `C:\cheerp\bin\clang++ -target cheerp .\KnuthMorrisPratt.cpp -O3 -o kmp.js -cheerp-make-module=commonjs`

> **Note**
> see the cheerp [documentation](https://docs.leaningtech.com/cheerp/Cheerp-specific-clang-options) for more options
