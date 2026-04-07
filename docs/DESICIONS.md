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