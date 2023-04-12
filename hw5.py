def read_single_digit(n) :
    if n == 0 :
        return '영'
    elif n == 1 :
        return '일'
    elif n == 2 :
        return '이'
    elif n == 3 :
        return '삼'
    elif n == 4 :
        return '사'
    elif n == 5 :
        return '오'
    elif n == 6 :
        return '육'
    elif n == 7 :
        return '칠'
    elif n == 8 :
        return '팔'
    elif n == 9 :
        return '구'
    
def read_number(num) :
    n = str(num)
    w1 = n[0]
    w2 = n[1]
    w3 = n[2]
    n1 = read_single_digit(w1)
    n2 = read_single_digit(w2)
    n3 = read_single_digit(w3)
    print(n1, n2, n3)

read_number(input('세자리 정수 입력: '))
