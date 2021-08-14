with import <nixpkgs> {};
stdenv.mkDerivation {
  name = "simple_translator";
  nativeBuildInputs = [];
  shellHook = "echo 'Entering dev shell'; fish; exit";
}
