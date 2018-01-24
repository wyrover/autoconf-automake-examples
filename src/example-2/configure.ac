AC_INIT([x11-example], [1.0])

# safety check in case user overwritten --srcdir
AC_CONFIG_SRCDIR([x11-example.c])

AC_CONFIG_AUX_DIR([build-aux])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

# Check for C compiler
AC_PROG_CC

# Check for X11
# It exports variable X_CFLAGS and X_LIBS
AC_PATH_XTRA

# AC_PATH_XTRA doesn't error out by default,
# hence we need to do it manually
AS_IF([test "X$no_x" = "Xyes"],
  [AC_MSG_ERROR([Could not find X11])])

AC_CONFIG_FILES([Makefile])

AC_OUTPUT

