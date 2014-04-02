# TinyWM

libtinywm try to support x11, wayland and directfb backends currently.


## build for X11

```
./autogen.sh --prefix=/usr
make
sudo make install
```


## build for Wayland

```
./autogen.sh --prefix=$WLD
make
make install
```


## usage for Wayland

```
source wayland.source
tinywm
```


## TODO

- [ ] architecture design
- [ ] testcase driven
- [ ] tinywm abstract layer
- [ ] x11 backend support
- [ ] wayland backend support
- [ ] directfb backend support
- [ ] qt5 bindings
- [ ] gtk3 bindings
- [ ] dynamic backend switch
