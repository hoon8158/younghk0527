def get_integer(prompt) :
    num = float(input(prompt))
    return num

p = float(input('할인율은? '))

def get_fixed_price(num) :
    price = float(num/(1-(0.01*p)))
    return price

Aorigin = get_integer('A 상품의 할인된 가격은? ')
Borigin = get_integer('B 상품의 할인된 가격은? ')
print(get_fixed_price(Aorigin))
print(get_fixed_price(Borigin))
