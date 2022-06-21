PWM significa Modulación de Ancho de Pulso y es una técnica usada para controlar el brillo del LED, el control de velocidad del motor DC, el control de un servomotor o donde 
usted tiene que obtener salida analógica con medios digitales.

Los pines digitales Arduino nos dan 5V (cuando están en ALTO) o 0V (cuando están en BAJO) y la salida es una señal de onda cuadrada. 
Así que si queremos atenuar un LED, no podemos obtener el voltaje entre 0 y 5V del pin digital pero podemos cambiar la hora de encendido y apagado de la señal. 
Si cambiamos el tiempo de encendido y apagado lo suficientemente rápido, entonces el brillo del led cambiará.

Antes de seguir adelante, veamos algunos términos asociados con PWM.

    TON (On-Time, Tiempo de encendido): Es el momento en que la señal es alta.
    TOFF (Off-Time, Hora de apagado): Es el momento en que la señal está baja.
    Punto: Es la suma de tiempo de encendido y apagado.
    Ciclo de trabajo: Es el porcentaje de tiempo en que la señal estuvo alta durante el período.

Por lo tanto, con un ciclo de trabajo del 50% y una frecuencia de 1 Hz, el led estará a nivel alto durante medio segundo y a nivel bajo durante el otro medio segundo.
 Si aumentamos la frecuencia a 50Hz (50 veces ON y OFF por segundo), entonces el led se verá iluminado a media luz por el ojo humano.
