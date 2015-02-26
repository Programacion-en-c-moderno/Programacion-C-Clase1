# Datos iniciales para generar el configure

AC_INIT(holaclase, 1.0, correo@falso.com)
AM_INIT_AUTOMAKE(holaclase, 1.0)
AC_CONFIG_SRCDIR([src/holaclase.c])

# Comprueba si tenemos el compilador C (GNU cc)
AC_PROG_CC

# Comprobamos las bibliotecas

# Comprobamos si estan las cabeceras
AC_CHECK_HEADERS([stdlib.h stdio.h])

# Comprobamos si existe la funcion malloc en nuestras bibliotecas
AC_FUNC_MALLOC

# Ficheros que generamos
AC_OUTPUT(Makefile src/Makefile)
