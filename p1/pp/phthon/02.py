# end 옵션 : 한눈에 볼 수 있도록 길게
print()
print('welcome to', end=' ')
print('IT News', end=' ')
print('web site')
print()

#file 옵션 : 별도의 file로 쓸 때
import sys
print('Learn Python', file=sys.stdout)
print()

#format 사용(d, s, f)
print('%s %s' % ('one', 'two'))
print('{} {}'.format('one', 'two')) #format 함수가 내부적으로 처리
print('{1} {0}'.format('one', 'two')) #순서 지정해서 사용 - 출력: two one
print() 

# %s
print('%10s' % ('nice')) #10은 총 자릿수, 빈 자리 공백으로 채움
print('{:>10}'.format('nice')) #문자열일때는 s 생략하고 이렇게 써도 가능(정수,실수는 안됌)

print('%-10s' % ('nice')) 
print('{:10}'.format('nice'))

print('{:_>10}'.format('nice'))

print('{:_>10}'.format('nice')) 
print('{:^10}'.format('nice')) # 중앙정렬

print('%.5s' % ('pythonstudy')) #5글자만 출력
print('{:10.5}'.format('pythonstudy')) #10개의 공간이 있지만 왼쪽부터 5개만 출력
print()

#%d
print('%d %d' % (1,2))
print('{} {}'.format(1,2))

print('%4d' % (42))
print('{:4d}'.format(42))
print()

#%f
print('%f' % (3.14343434)) 
print('{:f}'.format(3.14343434))

print('%06.2f' % (3.141592653589793)) #총 여섯자리,소수부는 두자리,정수부 나머지부분 0으로 채움
print('{:06.2f}'.format(3.141592653589793))
print()





