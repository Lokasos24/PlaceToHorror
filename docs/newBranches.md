# Creacion de branches

## 1- Estado Reactivo
* Por que esta rama: Es por que se necesita estados variados para pausar el renderizador por frames.

* Caso de exito: Cuando el uso de CPU baje al <1% (puede ser mas o menos dependiendo de cuanto tenga el programa) cuando no se esta usando.

---

## 2- Gestor de errores
* Por que esta rama: Para gestionar errores dinamicamente y evitar que tengas que adivinar que paso.

* Caso de exito: Exito cuando el gestor capture un error forzado.

---

## 3- Sistema de eventos
* Por que esta rama: Para que se *disparen acciones* a los *contenedores padres* (como React) y quede un sistema desacoplado.

* Caso de exito: Exito cuando un boton de la UI agregue un cubo al mundo directamente.

---

## 4- Interfaz de usuario
* Por que esta rama: Por que esta rama *disparara eventos* para crear una *entidad* nueva sin necesidad de comandos o crearlos a travez de lineas de codigo.

* Caso de exito: Cuando la interfaz sea intuitiva y facil de usar.

---

## 5- Mover objetos
* Por que esta rama: Por que esta rama movera objetos/entidades del mundo con el *mouse* que esten para posicionarlos.

* Caso de exito: Cuando un objeto se posicione "bien" desde la posicion inicial hasta donde se arrastro el *mouse*.