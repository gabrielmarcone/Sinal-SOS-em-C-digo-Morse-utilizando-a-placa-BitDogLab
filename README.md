
# 🚀 Projeto: Sinal SOS em Código Morse com Raspberry Pi Pico W e BitDogLab

## 📋 Descrição
Este projeto implementa o envio de um sinal SOS em código Morse utilizando um LED externo conectado a uma placa de desenvolvimento **Raspberry Pi Pico** com suporte da **BitDogLab**. O sinal SOS é transmitido através de pulsos luminosos, seguindo o padrão internacional de código Morse:

- **Ponto (.)**: LED aceso por 0,2 segundos.
- **Traço (-)**: LED aceso por 0,8 segundos.
- **Intervalo entre pontos e traços**: 0,125 segundos.
- **Intervalo entre letras**: 0,25 segundos.
- **Intervalo entre ciclos completos do sinal SOS**: 3 segundos.

## 🔧 Funcionalidade
A funcionalidade principal do projeto é enviar repetidamente o sinal SOS (três pontos, três traços, três pontos) utilizando um LED externo conectado ao pino GPIO 13 da Raspberry Pi Pico. O programa segue os tempos definidos para cada ponto, traço e intervalos, garantindo a precisão do sinal transmitido.

## ▶️ Como Executar o Projeto

### 1. **Conexão do LED**
- Conecte o terminal positivo do LED ao pino GPIO 13 da Raspberry Pi Pico.
- Conecte o terminal negativo do LED a um resistor de 220 Ω.
- Conecte o outro terminal do resistor ao pino GND da Raspberry Pi Pico.

### 2. **Carregamento do Código**
1. Conecte a Raspberry Pi Pico ao computador em modo de bootloader (pressione e segure o botão **BOOTSEL** ao conectar o cabo USB).
2. Copie o arquivo `.uf2` gerado para a unidade que aparecerá no explorador de arquivos.
3. A placa reiniciará automaticamente e começará a executar o programa.

### 3. **Execução**
- O LED externo piscará conforme o padrão SOS:
  - Três pontos (•••), três traços (---), três pontos (•••).
  - Intervalo entre pontos/traços: 0,125 segundos.
  - Intervalo entre letras: 0,25 segundos.
  - Intervalo entre ciclos completos: 3 segundos.

## 💻 Ambiente de Desenvolvimento
- **IDE**: Visual Studio Code
- **Extensões**:
  - Wokwi for VS Code
  - C/C++ Extension Pack
  - Raspberry Pi Pico
  - CMake Tools
- **Compilador**: SDK v2.1.0 da Raspberry Pi Pico W com suporte a C/C++

## 🌐 Simulação
O projeto pode ser simulado online usando a plataforma [Wokwi](https://wokwi.com/), permitindo testar o comportamento do LED antes de carregar o código na placa física.

## 🤝 Contribuição
Sinta-se à vontade para contribuir com melhorias ou sugestões para este projeto. Para contribuir:
1. Fork este repositório.
2. Crie uma nova branch para sua funcionalidade.
3. Envie um Pull Request detalhando as alterações realizadas.