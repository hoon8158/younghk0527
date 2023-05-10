def buy(dict):
    print('[구입]')
    while True :
        item = input('상품명? ')
        if item != '' :
            count = int(input('수량은? '))
            print(f'장바구니에 {item} {count}개가 담겼습니다.')
        if item== '':
            return False
        dict[f'{item}']=count


def show(dict):
    print(f'>>>장바구니 보기: {dict}')


def find(dict):
    print('[검색]')
    key = input('장바구니에서 확인하고자 하는 상품은? ')
    if key in shopping_bag :
        print(f'{key}은(는) {dict[key]}개 담겨있습니다.')
    else:
        print(f'장바구니에 {key}(은)는 없습니다.')

    
shopping_bag = {}
while True:
    if buy(shopping_bag) == False:
        break
show(shopping_bag)
find(shopping_bag)
