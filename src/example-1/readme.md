# autoconf 步骤

在 mingw64 环境下运行

1. autoscan 生成 configure.scan, 改名为 configure.ac
2. 修改 configure.ac

![](https://github.com/wyrover/autoconf-automake-examples/blob/master/src/example-1/1.png?raw=true)

3. 修改完毕后，执行 aclocal，生成 aclocal.m4
4. 执行 autoconf，生成 configure
5. 执行 autoheader
6. 创建 Makefile.am  NEWS README AUTHORS ChangeLog
7. 编辑 Makefile.am
8. 执行 `automake -a` 生成 `Makefile.in`

9. 执行 ./configure
10. make


**两处需要修改文件的地方**

- configure.ac
- Makefile.am


