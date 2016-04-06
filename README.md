# bccpolya
#Gabriel Pereira Pinto

**Descrição do problema.**

  Desenvolver uma função em C que caucule uma aproximação da raiz quadrada de um número real.
  
**Apresentação da solução em linguágem matemática.**

Sendo:

n = raiz desejada; k>0; 

Temos a formula:
![ak]
(https://github.com/gabrielpp7/bccpolya/blob/master/ak.gif?raw=true)
 

onde:
![a0]
(https://github.com/gabrielpp7/bccpolya/blob/master/a0.gif?raw=true)
 
**Apresentação de solução em Português estruturado.**

Algoritmo "semnome"

// Seção de Declarações das variáveis

// Descrição   : O objetivo deste programa é calcular o resultado aproximado, ou exato da raiz quadrada.

// Autor    : Gabriel Pereira Pinto

// Data atual  : 06/04/2016

Var

// Seção de Declarações das variáveis

   a: real
   
   b: inteiro

Inicio

// Seção de Comandos, procedimento, funções, operadores, etc...


   escreval ("==============================================")
   
   escreval ("======                                  ======")
   
   escreval ("======  Algoritmo Calcula raiz quadrada ======")
   
   escreval ("======                                  ======")
   
   escreval ("==============================================")
   
   escreval ("")
   
   escreva("         Digite o valor: ")
   
   leia(a)
   
   escreva("         A raiz quadrada de ", a, " = ", raizq(a): 1:2)
   

Fimalgoritmo

**Apresentação de solução em fluxograma.**

![fluxograma]
(https://github.com/gabrielpp7/bccpolya/blob/master/fluxograma.png?raw=true)

**Justificativa do uso do tempo "polya" do nome do repositório.**

O nome é justificado devido a ao nome de George Polya, que foi um matemático que desenvolveu um método para resolução de problemas.

Seu método que busca fazer com que qualquer um resolva qualquer problema tem a seguinte estrutura:

*--Primeira etapa: Entender o problema* - Nesta etapa o objetivo é a compreenção do problema, buscando identificar qual a incognita do problema e quais são as informações e dados do problema. Após isso realisar perguntas sobre o problema apresentado, tentando construir perguntas de como começar resolver, quais as possibilidades de resolução, quais podem ser os desafios que podem surgir durante a resolução do problema, dentre outras perguntas.

*--Segunda etapa: Construir uma estratégia.* - Após já ter a pergunta de quais são as possiveis soluções e desafios para o problema, traçar uma estratégia cruzando os dados e informações do problema com a incognita levando em consideração todos os possiveis desafios que podem ser encontrados durante o caminho.

*--Terceira etapa: Execução da estratégia.* Tendo todo o possivel método de resolução do problema deve-se então executá-lo tendo sempre o cuidado de seguir o plano e de solucionar os desafios encontrados na etapa anterior.

*--Quarta etapa: Revisão.* - Com a resposta da incognita em mãos deve-se examinar esse resultado de forma a:

saber se ele era o resultado esperado;

perceber se forma que ele foi resolvido foi certa;

traçar outras possiveis estratégias para a resolução;

verificar se esta é a melhor forma de resolução;

entender qual era o objetivo do problema, se ele pode ser utilizado para situações parecidas e se a resolução pode ser a mesma;
