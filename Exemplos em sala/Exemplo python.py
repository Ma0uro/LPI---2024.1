import sys


def main():
  print(sys.version)

  print("Hello World")

  a = 10
  f = 20.0
  c = "texto"
  v = [1, 2, 3, 4, 5]

  print(a, f, c , v)

  res = a + f

  print(res)

  print( soma(10, 100))



def soma (a, b):
  return a + b


if __name__ == '__main__':
   main()