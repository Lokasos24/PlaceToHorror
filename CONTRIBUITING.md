# 🛠 Ritual de Construcción - PlaceToHorror Engine

### 1. Preparación (Solo si agregas archivos .cpp nuevos)
Si creas un archivo nuevo en `src/`, agrégalo a la lista `set(SOURCES ...)` en `CMakeLists.txt` (ejemplo: "${CMAKE_CURRENT_SOURCE_DIR}/src/core/{nombre del archivo}.cpp").

### 2. Compilación (El martillo)
Desde la carpeta `/build`, ejecuta:
bash: cmake --build .

### 3. Emergencia
Si algo se rompe y no sabes por qué, borra todo dentro de /build y haz:
bash:
    1- cmake ..
    2- cmake --build .

