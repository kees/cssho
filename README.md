# cssho
Compiler Support for Security Hardening Options

This is a tiny projec to do simple compiler testing of various features
as needed.

So far:

```
$ gcc --version
gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
$ make
cc -Wall -c main.c
cc -Wall -Wimplicit-fallthrough -c fallthrough.c
fallthrough.c: In function ‘test’:
fallthrough.c:9:9: warning: this statement may fall through [-Wimplicit-fallthrough=]
   flags |= 100;
   ~~~~~~^~~~~~
fallthrough.c:10:2: note: here
  case 2:
  ^~~~
cc -Wall -o tests main.o fallthrough.o
```

```
$ clang --version
clang version 10.0.0 (https://github.com/llvm/llvm-project.git 84cb4b2b533c9b662707ad3f6500b39370923e0d)
$ make CC=clang
clang -Wall -c main.c
clang -Wall -Wimplicit-fallthrough -c fallthrough.c
fallthrough.c:15:3: warning: declaration does not declare anything [-Wmissing-declarations]
                __attribute__((__fallthrough__));
                ^
1 warning generated.
clang -Wall -o tests main.o fallthrough.o
```
