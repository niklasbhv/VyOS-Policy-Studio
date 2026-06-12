{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  packages = with pkgs; [
    qt6.qtbase
    qt6.qttools
    qt6.qtdeclarative
    cmake
    doxygen
    gnumake
  ];

  shellHook = ''
    export QT_PLUGIN_PATH=${pkgs.qt6.qtbase}/lib/qt-6/plugins
    export QML2_IMPORT_PATH=${pkgs.qt6.qtdeclarative}/lib/qt-6/qml
  '';
}
