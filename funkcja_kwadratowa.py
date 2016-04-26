import math

def quadratic_function(a, b, c):
    delta = b*b - 4*a*c
    print "Delta = ", delta

    if delta > 0:
        x1=(-b - math.sqrt(delta)) /(2*a)
        x2=(-b + math.sqrt(delta)) /(2*a)
        print "Miejsca zerowe funkcji to: {} i {} ".format(x1, x2)
    elif delta < 0:
        print "Brak miejsc zerowych"
    else:
        x1=(-b - math.sqrt(delta)) /(2*a);
        print "Miejsce zerowe funkcji to: {}".format(x1)




a = input("Podaj a: ")
b = input("Podaj b: ")
c = input("Podaj c: ")

quadratic_function(a, b, c)
