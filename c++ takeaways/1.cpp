@ #include <iostream>
iostream(input output stream)�̶�� ǥ�� ���̺귯�� ������ ��ó�� �ϰ� �ִ�.
iostream ��������� c++ ���� ǥ�� ����¿� �ʿ��� �͵��� �����ϰ� �ִ�.

c++�� ��� ���� �ڿ� .h�� ���� �ʴ´�.

printf(ǥ�� �Լ�)  -> std::cout
std::endl -> �ش� ������ ��ġ��, endl�� ���� �������ش�.

@namespace 
std�� c++ ǥ�� ���̺귯���� ��� �Լ�, ��ü ���� ����� �̸� ����
�̸� ������ � ���ǵ� ��ü�� ���� ��� �Ҽ����� �������ش�.
ex)std::cout -> std��� �̸� ���� �ȿ� �ִ� cout�� �ǹ�

namespace header 1 { int foo(); void bar(); }
namespace header 2 { int foo(); void bar(); }

�ش� foo�� bar�� �ٸ� �̸������� ��� �ִ�.
#include "header1.h"
namespace header1 { int func() { foo(); } } header1::foo �� �����
namespace header1 { int func() { foo(); header2::foo; } }foo 1.2 �Ѵ� �����

� �̸� ������ �Ҽӵ��� �ʾҴٸ� ��������� �̸� ������ �����ؾ� ��.
int func() { header1::foo();} 

foo�� ������ �� ���, �Ź� header1::�� ���̱� ��������,
�� �� namespace�� Ȱ���Ͽ�
using header1::foo; �� �����ϸ�
int main(){foo()} -> �̷��� ��� ����

using namespace std�� �������� ����
c++ ǥ�� ���̺귯���� �ſ� ����ϱ� �����ε�,
c++������ �ٲ� ������ �� �۵��ϴ� �ڵ尡 �۵����� ���� ���� �ְ�, �̸��� ��ġ�� ���� 
��ġ�� �����.

@cout? 
ostream Ŭ������ ��ü �� �ϳ���, ǥ�� ���(c��� -> stdout)�� ����Ѵ�.
endl -> ȭ�鿡 ������ִ� '�Լ�'�̴�.

@�̸� ���� namespace
�ش� ���� �ȿ����� ���� ����
static Ű����� ����

�ʺ��ڵ��� ����� �д��� �ñ��� �Ѵ�
