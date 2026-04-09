# 📓 Bitacora de desarrollo: Kyong

## Registro 01: **Linkeo de CMake** 03/04/26

### El problema: Para comunicar los archivos se necesita un centralizador de buscador

### Mi pensamiento: 
Mis archivos necesitan estar comunicados y buscarse entre si, pero cpp no me lista los archivos automaticamente

### La desicion:
Implementar CMake para automatizar este proceso y no ir añadiendo mas cosas manualmente para hacerlo mas versatil

### Nota
No se actualiza automaticamente, aun tengo que agregar los archivos asi que la solucion es tecnicamente ABSURDA (tengo que arreglar eso)



## Registro 02: **Las entidades del motor** 07/04/26

### El problema: Para un juego *multijugador* solo se tendria un jugador por cada juego.

### Mi pensamiento: 
Para que un juego pueda ser conectado por internet necesita un *gestor de Entidades* para hacer que el juego no sea solo de un jugador.

### La desicion: 
Implemente un *Entity Manager* para que gestione las entidades que se necesitaran si un juego se vuelve mas grande.



## Registro 03: **Estado reactivo del motor** 08/04/26

### El problema: Para la computadora es dificil re-dibujar todo cada vez consumiendo varios ciclos de la CPU innecesariamente.

### Mi pensamiento: 
Para que el programa no consuma tantos ciclos del CPU innecesariamente se me ocurrio poner *estados* en el *Engine* para *dormir* el programa y espere una tecla o una pasada del mouse para volver a activarse.

### Lo que usaba:
Estaba redibujando todo cada frame, entonces consumia el 7% de CPU constantemente y vi que era un problema.

### La desicion:
Implementar un *Engine estate* para poder cambiar facilmente de estados y que por cada estado ocurra algo diferente.


## Registro 04 **Gestor de Errores** 09/04/26:

### Mi pensamiento:
Para que el programa no colapse por un error de memoria mio decidi incluir esto como un **guardia** para que me avise si hay algun error.

### Lo que usaba:
Iba a ciegas en gestionar errores sutiles y prefiero gestionar esos errores sutiles antes de que exploten en algo.

### La desicion:
Implementar un *ErrorManager* para que pase los tests que se implementaran segun ocurra una nueva funcionalidad.