# Conceptos sobre funciones

## Funciones

### Funcion normal:
* Proposito: Evitas que C++ haga converciones que indeseadas, necesitas ser claro con el cuerpo de el archivo *.h*.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Encapsulamiento de logica reutilizable.
    - Codigo mas modular y escalable.
    - Si el codigo hace mas de una cosa, podria optimizarse o llamarse a otra funcion para optimizar.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Mas boilerplate.
    - Las funciones necesitan pasarle los argumentos que necesitan (no pueden ser null).
    - Poner demaciada logica podria hacer mas costoso el calculo.

3. Síntesis: ¿VALE LA PENA?
    - Cuando necesites encapsular logica que se reutilizara.

### Funcion con **const**: 
* Proposito: Es para decirle a la funcion que los datos son solo de lectura, es decir, las variables que se pasan no pueden modificarse.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Edicion de variables dentro de la funcion.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Mas boilerplate.
    - No editables en tiempo de ejecucion.

3. Síntesis: ¿VALE LA PENA?
    - Vale la pena solo cuando los datos que pasen no necesiten ser modificados internamente.

---

### Funcion con **static**: 
* Proposito: Le dice a la funcion que solo le pertenece a esa *clase*, para llamarla con otra funcion se le debe declarar *static* si no esta se generaliza la funcion con todas las *entidades* creadas por esa clase.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Añade una funcion dentro que puede ser global para diferentes entidades.
    - Menos *funciones* re-escritas si la funcion no tiene puntero *this*.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Mas boilerplate.
    - Una funcion *static* solo puede tocar otras que se les declaro anteriormente *static*.
    - No puede tocar variables de la clase en la que se definio.
    - Si la funcion que llama no es *static* entonces *generaliza* esa funcion.

3. Síntesis: ¿VALE LA PENA?
    - Cuando veas que se repiten muchas cosas y probablemente se pueda *globalizar*.

---

### Funcion con **virtual**: 
* Proposito: La funcion permite ser sobreescrita por una *clase* hija, esto es para que busque quien contiene la *verdad* de la funcion, es como un intermediario que dirije donde va.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Añade la *virtual Table* que busca las referencias mediante un *puntero virtual* para encontrar donde llamaron a esa funcion.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Mas boilerplate.
    - Tiene un *salto* que va desde la *CPU* hasta encontrar la *funcion* que se creo en la *tabla virtual*.

3. Síntesis: ¿VALE LA PENA?
    - Cuando tienes varias entidades haciendo referencia a esa misma funcion.

---

### Funcion con **inline**: 
* Proposito: Esta es para funciones mas pequeñas, para que se pegue el codigo directamente y no tenga que buscarse.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Que no se cargue todo el codigo linea por linea.
    - Elimina el costo de llamar a una funcion pegandola directamente.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Boilerplate.
    - En funciones grandes pega y carga todo de golpe (binary bloat).

3. Síntesis: ¿VALE LA PENA?
    - Cuanto las funciones son pequeñas y no se necesite de logica compleja.

---

### Funcion con **explicit**: 
* Proposito: Evitas que C++ haga converciones que indeseadas, necesitas ser claro con el cuerpo de el archivo *.h*.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Evita que se haga la convercion de tipos automaticamente.
    - Al crear una *clase* necesitas definir el *id*.
    - Seguridad en el sistema de *estructura* de una creacion de objetos.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Mas boilerplate.

3. Síntesis: ¿VALE LA PENA?
    - Cuando necesites ser preciso con la informacion.

---

### Funcion con **overrride**:
* Proposito: Evitas que C++ haga converciones que indeseadas, necesitas ser claro con el cuerpo de el archivo *.h*.

1. Seguridad: ¿QUÉ FRAGILIDADES ELIMINA?
    - Evita que se haga la convercion de tipos automaticamente.
    - Al crear una *clase* necesitas definir el *id*.
    - Seguridad en el sistema de *estructura* de una creacion de objetos.

2. Costo: ¿QUÉ RIESGOS INTRODUCE?
    - Mas boilerplate.

3. Síntesis: ¿VALE LA PENA?
    - Cuando necesites ser preciso con la informacion.

<!-- 
Enfoque integrado:
- Munger (función positiva)
- Taleb (fragilidad evitada)
- Realismo (fragilidad nueva)
- Decisión informada (aplicación)
-->