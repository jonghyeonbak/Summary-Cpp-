@ #include <iostream>
iostream(input output stream)이라는 표준 라이브러리 파일을 전처리 하고 있다.
iostream 헤더파일은 c++ 에서 표준 입출력에 필요한 것들을 포함하고 있다.

c++은 헤더 파일 뒤에 .h가 붙지 않는다.

printf(표준 함수)  -> std::cout
std::endl -> 해당 구문을 마치고, endl을 통해 개행해준다.

@namespace 
std는 c++ 표준 라이브러리의 모든 함수, 객체 등이 저장된 이름 공간
이름 공간은 어떤 정의된 객체에 대해 어디 소속인지 지정해준다.
ex)std::cout -> std라는 이름 공간 안에 있는 cout을 의미

namespace header 1 { int foo(); void bar(); }
namespace header 2 { int foo(); void bar(); }

해당 foo와 bar는 다른 이름공간에 살고 있다.
#include "header1.h"
namespace header1 { int func() { foo(); } } header1::foo 가 실행됨
namespace header1 { int func() { foo(); header2::foo; } }foo 1.2 둘다 실행됨

어떤 이름 공간에 소속되지 않았다면 명시적으로 이름 공간을 지정해야 함.
int func() { header1::foo();} 

foo를 여러번 쓸 경우, 매번 header1::을 붙이기 귀찮은데,
이 때 namespace를 활용하여
using header1::foo; 를 선언하면
int main(){foo()} -> 이렇게 사용 가능

using namespace std는 권장하지 않음
c++ 표준 라이브러리가 매우 방대하기 때문인데,
c++버전이 바뀔 때마다 잘 작동하던 코드가 작동하지 않을 수도 있고, 이름을 겹치게 쓰면 
고치기 힘들다.

@cout? 
ostream 클래스의 객체 중 하나로, 표준 출력(c언어 -> stdout)을 담당한다.
endl -> 화면에 출력해주는 '함수'이다.

@이름 없는 namespace
해당 파일 안에서만 접근 가능
static 키워드와 동일

초보자들은 뭐라고 읽는지 궁금해 한다
