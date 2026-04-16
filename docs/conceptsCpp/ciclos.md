# Loops (while and for)

## While

* Proposito: Hace un *ciclo* constante hasta que una condicion sea *verdadera* o *falsa* segun tu asignaste anteriormente.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Automatizar procesos repetitivos.
    - Tener un ciclo constante hasta que una condicion la ejecutes tu como presionar una tecla.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - No apagar el ciclo con una tecla para parar el loop infinito inicializado.
    - Mucha logica dentro del ciclo hace que la CPU tarde en terminar.

3. Síntesis: ¿VALE LA PENA?
    - Cuando tienes un ciclo que se debe detener cuando una condicion o cambio de estado sea *reactivo*

---

## For

* Proposito: Hacer un loop con una finalizacion inicial.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Automatizar procesos repetitivos.
    - Tener un ciclo que se inicializa sola y termina automaticamente.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Si la condicion de terminado nunca se cumple, podrias generar un loop infinito sin poder pararlo.
    - Mucha logica dentro del ciclo hace que la CPU tarde en terminar.

3. Síntesis: ¿VALE LA PENA?
    - Cuando sean datos de un *Array* o *condicion finita* que tengas que ciclar.

---

## Ejemplos de uso de ambos

```c++
int flag = 0;
while(flag == 3){
    flag += 1;
}

for(int i = 0; i <= 5; i++){
    std::cout << "Numero de la iteracion: " << i;
}