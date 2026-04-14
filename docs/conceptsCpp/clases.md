# Estructura de POO (programacion orientada a objetos)

## Clases

* Proposito: Una clase funciona principalmente como un contenedor de datos masivo, las propiedades son privadas por defecto.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Funciones repetitivas.
    - Dependencia de cosas externas.
    - Cada cosa generada por una clase tiene sus propios metodos.
    - Tiene metodos por ejemplo: *private* que solo el dueño generado por el objeto puede leer.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Mas boilerplate.
    - Mas pesado para leer.
    - Si tiene funciones virtuales, se genera una *VR* (tabla virtual) que contienen *vptr* (punteros virtuales), puede ser mas pesado para gestionar con esas funciones.
    - Si la clase contiene mucho *metodos* o *datos* pequeños, podria pasar que tendrias *cache misses*.

3. Síntesis: ¿VALE LA PENA?
    - Vale la pena cuando las funciones que contendra algo no deben ser tantas para poder leerse.

---

## Structs

* Proposito: Contiene datos puros predefinidos para poder pasarlos sin perderse, las propiedades de una struct son publicas por defecto.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Los datos se definen antes.
    - Compatibilidad con *C*.
    - El procesador puede leerlos mas rapido.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Mas boilerplate.
    - Falta de proteccion por ser todo publico.
    - Si va a contener varias funciones es mejor una clase.

3. Síntesis: ¿VALE LA PENA?
    - Vale la pena cuando vas a definir como va a ser una "clase" por asi decirlo.