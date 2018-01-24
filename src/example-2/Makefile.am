bin_PROGRAMS = x11-example

x11_example_SOURCES = x11-example.c
x11_example_CFLAGS = @X_CFLAGS@
# AX_PATH_XTRA only specify the root of X11
# we still have to include -lX11 ourselves
x11_example_LDFLAGS = @X_LIBS@ -lX11
