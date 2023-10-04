#Calcula média em Python
# não é necessário declarar variáveis em python, mas, se não declarado, será automaticamente declarado em STRING(char)
# input -> entrada de dados (leia)
# print -> escreva 

P1 = float (input ("Digite a nota P1\n"))
P2 = float (input ("Digite a nota P2\n"))

m = P1 + P2
m = m / 2

if m <= 3.0:
    print ("Sua nota é", m, "Você foi reprovado!")

elif  3.1 <= m <= 5.9:
    print ("Sua nota é", m, "Você está de recuperação!")

else:
    print ("Sua nota é", m, "Você foi aprovado!") 
   
