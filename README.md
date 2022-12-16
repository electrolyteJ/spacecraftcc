# install deps
cd cmake-build-debug && conan install ..

.conan/profiles/default
```
[settings]
os=Windows
os_build=Windows
arch=x86_64
arch_build=x86_64
compiler=Visual Studio
compiler.version=15
build_type=Release
```
conan配置的arch、build_type与cmake配置的toolchain相互匹配时，工程才能跑起来。
