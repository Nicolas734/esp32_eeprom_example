# EEPROM do ESP32

A **EEPROM** (Electrically Erasable Programmable Read-Only Memory) é uma área de memória não volátil presente no **ESP32**, um microcontrolador de baixo custo e alto desempenho desenvolvido pela Espressif Systems. Essa memória é usada para armazenar dados de forma persistente, mesmo quando o dispositivo é desligado.

## Características da EEPROM no ESP32

A EEPROM do ESP32 possui as seguintes características principais:

1. **Armazenamento não volátil**: Os dados gravados na EEPROM permanecem mesmo quando a energia é removida, garantindo que as informações sejam retidas após reinicializações ou desligamentos.

2. **Endereçamento sequencial**: A EEPROM é organizada como uma matriz de bytes, e os dados são acessados através de endereços sequenciais, permitindo o armazenamento e recuperação simples de informações.

3. **Ciclos de escrita limitados**: Assim como outras memórias EEPROM, o ESP32 tem um número limitado de ciclos de escrita por endereço. Isso significa que é importante evitar regravações constantes no mesmo endereço, para prolongar a vida útil da memória.

4. **Tamanho limitado**: O tamanho da EEPROM no ESP32 é limitado, geralmente variando de 4 KB a 16 KB, dependendo da versão e do chip específico.
