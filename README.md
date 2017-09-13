
Projeto, com tema "Cubo mágico", onde são aplicadas técnicas e conceitos de Computação Gráfica usando openGL.
A aplicação tem  um ambiente  com  dois  cubos  mágicos, sendo um deles a componente principal, e outros elementos de três dimensões. O mundo criado pretende  simular  um  sistema  solar  com  alguns  planetas, onde é  possível, com o  auxílio  do teclado, movimentar o cubo principal e acompanhá-lo na exploração de toda a área envolvente e os elementos que a constituem. Para dar mais realismo ao trabalho, foram introduzidos alguns fenómenos  naturais  como  nevoeiro,  chuva  e  neve,  que  pretendem  demonstrar  os  possíveis climas no planeta extraterrestre em questão. Além disso, foram exploradas outros tipos de técnicas de computação gráfica, como iluminação, transparência, sombreamente e reflexão.

![alt text](https://i.imgur.com/fKA2xxa.png)

**Executar**

-Aplicação pode ser executada em qualquer IDE configurado para programação gráfica com OpenGL na linguagem C++ ou através do executável presente em bin/debug


![alt text](https://i.imgur.com/0KhQj0U.png)


**Ações**

Depois de correr o executável o utilizador pode efetuar operações e tomar várias escolhas, quer através  do teclado ou do menu gerado na posição do cursor, quando se clica no botão direito do rato. No menu estão disponíveis as opções relativas a ligar e desligar luzes (modo dia/noite, ligar/desligar luz do tecto e ligar/desligar lanterna do observador), ativar e desativar os fenómenos naturais (nevoeiro, chuva e neve), e escolher entre os vários tipos de preenchimento  das faces do  cubo  (cores,  texturas  e  materiais),  além  da  opção  de  sair  da aplicação. As restantes escolhas podem ser feitas através do teclado, funcionando cada tecla do seguinte modo:  

-Setas Up e Down: modificam a posição em y do observador, permitindo fazer zoom in e zoom out na cena.  

-Setas  Left  e  Right: modificam a  posição  e  orientação  do  observador  segundo  uma circunferência para a esquerda e direita.  

-Tecla ‘p’: permite parar ou reiniciar a rotação que o cubo mágico principal descreve em torno do seu eixo bem como a translação efetuada pelo sol. 

-Teclas ‘+’ e ‘-‘: incrementam e  diminuem a  velocidade  da  rotação descrita  acima  (e eventualmente alteraram o seu sentido).

-Tecla ‘o’: troca o tipo de observador, entre o que acompanha o cubo mágico e o que pode explorar todo o mundo. 

-Teclas ‘a’ e ‘z’: modificam a posição do observador (tipo um ou tipo dois) avançando e recuando.  Se  o  observador selecionado
for dotipo  1  o  cubo  principal  irá  também avançar, sendo o observador a seguir o cubo.

-Teclas ‘d’ e ‘t’: servem para aumentar e diminuir o raio entre o observador do tipo 1 e o Rubik's Cube principal.

-Tecla ‘r’: ativa  o  modo  de  reflexão  dos  objetos  na  superfície  do  chão  do  planeta e desativa o modo de sombra

-Tecla ‘s’: ativa o modo de sombra, desativando o modo de reflexão

-Tecla ‘l’: liga ou desliga a luz pontual móvel, trocando ainda o tipo responsável pelas sombras dos objetos, sol ou a luz configurável, esta parte é apenas válida quando está ativo o modo de sombra.

-Teclas ‘5’, ‘0’,’3’ e ‘1’: se a  luz móvel  roxa  estiver  ativa,  as  teclas  permitem  alterar  a posição da luz, modificando as tonalidades dos objetos e/ou as suas sombras




