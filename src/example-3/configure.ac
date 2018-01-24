AC_INIT([gl-example], [1.0])

AC_CONFIG_SRCDIR([gl-example.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([autoconf-archive/m4])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_PROG_CC

AX_CHECK_GL
AX_CHECK_GLUT

# For glew you can simply use
# AC_CHECK_LIB([GLEW], [glewInit])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])

AC_OUTPUT

