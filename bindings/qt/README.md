## qt4 for X11

```
export QT_SELECT=4
qmake
make
sudo make install
```

## qt5 for Wayland

```
source wayland.source
export QT_SELECT=5
qmake PREFIX=$WLD
make
make install
```
