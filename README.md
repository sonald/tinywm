# TinyWM

libtinywm supports x11, wayland and directfb backends right now.

├── doc
├── libtinywm
│   ├── ...
│   ├── tinywm.c
│   ├── tinywm.h
│   ├── wayland
│   └── x11
└── test

## hack

### build

```
./autogen.sh
./configure --prefix=$WLD
make
```

### xinitrc

```
source wayland.source
exec xterm & tinywm
```
