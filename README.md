# Qt5Sample
QTでGUIアプリ開発の小ネタ集。自分用ですが参考にﾄﾞｿﾞｰ。

## 環境
#### Ubuntu 16.04 desktop (ubuntu-ja-16.04-desktop-amd64.iso)
#### Qt 5.7.0 (qt-opensource-linux-x64-5.7.0.run)
これでQT Creatorを使ってQT4/QT5の開発が行えます。

## project説明

### qt1
「Qt Quick アプリケーション」基本形
```
#include <QGuiApplication>
```

### qw1
「Qt ウィジェットアプリケーション」基本形
```
#include <QApplication>
```

### qw2
JPGファイルを選択し、ウィンドウサイズの画像を画面表示。
![gunu](https://user-images.githubusercontent.com/35975215/36033233-bea92c12-0df3-11e8-8b35-f6bba60f58ed.png)

## その他
「-lGL」エラーが出た際は、下記を参考にして下さい。
```
Qt: can't find -lGL error
https://stackoverflow.com/questions/18406369/qt-cant-find-lgl-error
```

# 参考
#### QGraphicsPixmapItem Class
http://doc.qt.io/qt-5/qgraphicspixmapitem.html
#### QGraphicsScene Class
http://doc.qt.io/qt-5/qgraphicsscene.html
#### オブジェクトインスペクタ
http://ct-innovation01.hateblo.jp/entry/2017/09/06/103000
