# Template for LLVM-MOS Projects for MEGA65

- [x] CMake based build.
- [x] Automatically downloads mega65-libc as a dependency.

## Building

1. Install [llvm-mos-sdk](https://github.com/llvm-mos/llvm-mos-sdk#getting-started).
This e.g. downloads for linux and unpacks into `$HOME/llvm-mos`:
~~~sh
wget https://github.com/llvm-mos/llvm-mos-sdk/releases/latest/download/llvm-mos-linux.tar.xz 
tar xf llvm-mos-linux.tar.xz -C $HOME
~~~
2. Configure and make with:
~~~sh
cd llvm-mos-template
cmake -DCMAKE_PREFIX_PATH=$HOME/llvm-mos -B build
cd build/
make
~~~

