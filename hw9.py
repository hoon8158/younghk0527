class Rectangle:
    def __init__(self,a,b,c,d):
        self.__a=a
        self.__b=b
        self.__c=c
        self.__d=d

    def show(self):
        print(f'좌측상단 꼭짓점이 ({self.__a}, {self.__b})이고 ',end='')
        print(f'우측하단 꼭짓점이 ({self.__c}, {self.__d})인 사각형입니다.', end='')

    def getWidth(self):
        width=self.__c-self.__a
        return width
    
    def getHeight(self):
        height=self.__d-self.__b
        return height
    
    def getArea(self):
        w=self.getWidth()
        h=self.getHeight()
        area=w*h
        return area
    
    def getPerimeter(self):
        w=self.getWidth()
        h=self.getHeight()
        perimeter=2*(w+h)
        return perimeter


r1 = Rectangle(5, 5, 20, 10)
a = r1.getArea()
p = r1.getPerimeter()
    
r1.show()
print(f'\n넓이는 {a}, 둘레는 {p}')
