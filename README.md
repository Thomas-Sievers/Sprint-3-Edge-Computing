# Sprint-3 IoT - Gol Confirmado! ⚽

### Integrantes:
1. Thomas Soares Sievers  
2. João Pedro Silva de Menezes  
3. João Vitor Lombardi Hayashi  
4. José Otávio Kaneto  
5. Patrick Correa Haddad  

## Organização manual de partidas - Problema ❗
Nos campeonatos do canal **"passa a bola"**, toda a gestão ainda é feita manualmente: inscrições de jogadoras e times, montagem dos chaveamentos, registro de gols e resultados.  
Esse processo, além de trabalhoso, aumenta as chances de erro e compromete a experiência de quem participa e organiza.  

No caso específico da contagem de gols durante os jogos, a marcação manual pode atrasar a partida e gerar inconsistências no placar. Para manter o espírito de diversão, amizade e competitividade justa, precisamos de uma forma mais ágil e confiável de registrar os gols.

## Sobre a Solução 💡
A solução proposta utiliza **dois sensores PIR**, um em cada gol, conectados a um **Arduino Uno**.  
Quando a bola cruza a linha do gol, o sensor correspondente detecta o movimento e o sistema automaticamente:  
- Aciona um **buzzer** emitindo um aviso sonoro.  
- Atualiza o **placar em tempo real** em um **display LCD**.  

Assim, o registro dos gols deixa de ser manual e passa a ser feito automaticamente, garantindo mais precisão e fluidez no jogo.

### Impacto direto:
- **Agilidade:** o gol é registrado no instante em que acontece.  
- **Fluidez:** o jogo segue sem interrupções para marcação manual.  
- **Organização:** o sistema elimina erros na contagem de gols e torna os resultados mais confiáveis.  

## Planos Futuros 🚀
Este projeto é o primeiro passo para algo maior.  
Estamos desenvolvendo um **site para auxiliar na organização dos campeonatos**, com funções como:  
- Inscrição de jogadoras e times.  
- Montagem automática de chaveamentos.  
- Registro digital de resultados.  

Nosso objetivo é **integrar o sistema físico de detecção de gols ao site**, para que cada gol detectado seja automaticamente registrado na plataforma, criando estatísticas e tabelas em tempo real.

### Diagrama dos planos futuros:

<img width="839" height="792" alt="Image" src="https://github.com/user-attachments/assets/770cbe30-e0fb-44ee-a3c6-4c2fa1b36ce0" /> 

## Ferramentas 🛠️
### Para a realização desse projeto utilizamos:
- Arduino Uno  
- Protoboard  
- Jumpers (machos e fêmeas)  
- 2x Sensores PIR (um para cada gol)  
- Display LCD 16x2 com módulo I2C  
- Buzzer  

## Programação ⌨️ 
- Linguagem **C++**, utilizando a IDE do Arduino.  

## Simulação 🔬
### Utilizamos a plataforma: **Wokwi**.  
![Imagem do Projeto Montado]([INSIRA O LINK DA SUA IMAGEM AQUI])  
<br>  
[Link do Projeto - Wokwi](https://wokwi.com/projects/441577377092367361)  

## Vídeo do Projeto 🎥
[Assista ao Projeto em Ação](https://youtube.com/watch?v=SEU_LINK_AQUI)  
