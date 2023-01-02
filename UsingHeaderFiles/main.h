#ifndef MAIN_H_ // Preprocessor directives start with a hash
#define MAIN_H_ // Preprocessor will run as the first state
                // looking for commands beginning with #
                // it will then run these commands.

                // These specific commands define a symbol MAIN_H_
                // if the symbol is not already defined.

                // This ensures the contents of this file
                // cannot be accidentally included more than once.
void doSomething();

#endif // !MAIN_H_