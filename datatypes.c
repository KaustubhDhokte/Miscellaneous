#include <stdint.h>
#include <stdio.h>
//On 64 bit systems

/*
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/5/lto-wrapper
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.0-6ubuntu1~16.04.4' --with-bugurl=file:///usr/share/doc/
gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-sh
ared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --e
nable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdc
xx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-
browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-j
ava-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-a
md64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disab
le-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enab
le-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.0 20160609 (Ubuntu 5.4.0-6ubuntu1~16.04.4)
*/

int main()
{
    printf("char %ld\n", sizeof(char));  //OP: 1
    printf("short %ld\n", sizeof(short)); //OP: 2
    printf("int %ld\n", sizeof(int)); //OP: 4
    printf("long %ld\n", sizeof(long)); //OP: 8
    printf("long int %ld\n", sizeof(long int));
    printf("long long %ld\n", sizeof(long long)); //OP: 8
    printf("long long int %ld\n", sizeof(long long int));
    printf("float %ld\n", sizeof(float)); //OP: 4
    printf("double %ld\n", sizeof(double)); //OP: 8
    printf("unsigned char %ld\n", sizeof(unsigned char)); //OP: 1
    printf("unsigned short %ld\n", sizeof(unsigned short)); //OP: 2
    printf("unsigned int %ld\n", sizeof(unsigned int)); //OP: 4
    printf("unsigned long %ld\n", sizeof(unsigned long)); //OP: 8
    printf("unsigned long %ld\n", sizeof(unsigned long int));
    printf("unsigned long long %ld\n", sizeof(unsigned long long)); //OP: 8
    printf("unsigned long long %ld\n", sizeof(unsigned long long int));
    //printf("%ld\n", sizeof(unsigned float));  //Compiler Throws Error
    //printf("%ld\n", sizeof(unsigned double));  //Complier Throws Error
}