#include <cstdio>
#include <limits>

int main() {
  // 布尔类型
  printf("sizeof(bool) = %d, [%d, %d]\n", 
         static_cast<int>(sizeof(bool)),
         std::numeric_limits<bool>::min(),
         std::numeric_limits<bool>::max());

  // 字符类型
  printf("sizeof(char) = %d, [%d, %d]\n", 
         static_cast<int>(sizeof(char)),
         std::numeric_limits<char>::min(), 
         std::numeric_limits<char>::max());
  printf("sizeof(signed char) = %d, [%d, %d]\n",
         static_cast<int>(sizeof(signed char)),
         std::numeric_limits<signed char>::min(),
         std::numeric_limits<signed char>::max());
  printf("sizeof(unsigned char) = %d, [%d, %d]\n",
         static_cast<int>(sizeof(unsigned char)),
         std::numeric_limits<unsigned char>::min(),
         std::numeric_limits<unsigned char>::max());

  // 整数类型
  printf("sizeof(short) = %d, [%d, %d]\n", 
         static_cast<int>(sizeof(short)),
         std::numeric_limits<short>::min(), 
         std::numeric_limits<short>::max());
  printf("sizeof(unsigned short) = %d, [%d, %d]\n",
         static_cast<int>(sizeof(unsigned short)),
         std::numeric_limits<unsigned short>::min(),
         std::numeric_limits<unsigned short>::max());
  printf("sizeof(int) = %d, [%d, %d]\n", 
         static_cast<int>(sizeof(int)),
         std::numeric_limits<int>::min(), 
         std::numeric_limits<int>::max());
  printf("sizeof(unsigned int) = %d, [%u, %u]\n",
         static_cast<int>(sizeof(unsigned int)),
         std::numeric_limits<unsigned int>::min(),
         std::numeric_limits<unsigned int>::max());
  printf("sizeof(long) = %d, [%ld, %ld]\n", 
         static_cast<int>(sizeof(long)),
         std::numeric_limits<long>::min(), 
         std::numeric_limits<long>::max());
  printf("sizeof(unsigned long) = %d, [%lu, %lu]\n",
         static_cast<int>(sizeof(unsigned long)),
         std::numeric_limits<unsigned long>::min(),
         std::numeric_limits<unsigned long>::max());
  printf("sizeof(long long) = %d, [%lld, %lld]\n",
         static_cast<int>(sizeof(long long)),
         std::numeric_limits<long long>::min(),
         std::numeric_limits<long long>::max());
  printf("sizeof(unsigned long long) = %d, [%llu, %llu]\n",
         static_cast<int>(sizeof(unsigned long long)),
         std::numeric_limits<unsigned long long>::min(),
         std::numeric_limits<unsigned long long>::max());

  // 浮点类型
  printf("sizeof(float) = %d, [%f, %f]\n", 
         static_cast<int>(sizeof(float)),
         std::numeric_limits<float>::min(), 
         std::numeric_limits<float>::max());
  printf("sizeof(double) = %d, [%e, %e]\n", 
         static_cast<int>(sizeof(double)),
         std::numeric_limits<double>::min(),
         std::numeric_limits<double>::max());
  printf("sizeof(long double) = %d, [%Le, %Le]\n",
         static_cast<int>(sizeof(long double)),
         std::numeric_limits<long double>::min(),
         std::numeric_limits<long double>::max());

  return 0;
}
