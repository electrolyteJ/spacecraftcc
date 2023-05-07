
# 包管理

包管理| 包集成 | pc | 移动端
---|---|---|---
vcpkg| cmake的find_package/find_library |支持|不支持
homebrew | cmake的find_package/find_library |支持|不支持
conan | conan管理|支持|支持
xrepo/xmake| xrepo/xmake管理|支持|支持
prefab|cmake的find_package/find_library |不支持|仅支持Android

# homebrew install deps
brew install xxx

# conan install deps
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
