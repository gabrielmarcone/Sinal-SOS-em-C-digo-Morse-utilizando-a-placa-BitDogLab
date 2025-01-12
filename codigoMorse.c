#include "pico/stdlib.h"

//Definição da GPIO do Led Vermelhor
#define LED_PIN_RED 13

//Definição dos tempos
#define DOT_TIME 200         // Ponto - 0,2 segundos
#define DASH_TIME 800        // Traço - 0,8 segundos
#define GAP_TIME 125         // Intervalo dentro da mesma letra - 0,125 segundos
#define LETTER_GAP_TIME 250  // Intervalo entre letras - 0,25 segundos
#define CYCLE_GAP_TIME 3000  // Intervalo após o ciclo completo - 3 segundos

// Função para acender o LED por um tempo específico
void blink_led(int time_ms) {
    gpio_put(LED_PIN_RED, true);
    sleep_ms(time_ms);
    gpio_put(LED_PIN_RED, false);
}

// Função para enviar o sinal SOS em código Morse
void send_sos() {
    // S
    for (int i = 0; i < 3; i++) {
        blink_led(DOT_TIME); // Envia um ponto
        sleep_ms(GAP_TIME);  // Intervalo entre pontos
    }
    
    sleep_ms(LETTER_GAP_TIME); // Intervalo entre letras

    // O
    for (int i = 0; i < 3; i++) {
        blink_led(DASH_TIME); // Envia um traço
        sleep_ms(GAP_TIME);   // Intervalo entre traços
    }

    sleep_ms(LETTER_GAP_TIME);

    // S
    for (int i = 0; i < 3; i++) {
        blink_led(DOT_TIME);
        sleep_ms(GAP_TIME);
    }
}

int main() {
    gpio_init(LED_PIN_RED);
    gpio_set_dir(LED_PIN_RED, GPIO_OUT);

    while (true) {
        send_sos();
        sleep_ms(CYCLE_GAP_TIME);
    }

    return 0;
}