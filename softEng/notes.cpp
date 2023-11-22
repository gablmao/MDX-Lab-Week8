#include <iostream>

using namespace std;

int main(){
    cout << "test" << endl;

    return 0;
}


/*

week8 - build tools

> typically use g++ along with other tags to compile code
    > -o gives the file a name
    > -g gdp or debugging
    > -c compiles without linking to other files
    > -Wall -Wextra -Wpedantic
        > errors/warnings being ignored

> you can simplify compiling by writing a Bash script to run compilers
    > @echo off

        ... code here ...

        @echo on

    
    > ensure that this script is in the same location as the files you want to compile



> ALTERNATIVE: MAKE
    > a separate compiler type which compiles files that have changed, then those that need it
    > 



*/