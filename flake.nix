{
  description = "tree-sitter grammars for the PyF Haskell library";

  inputs = {
    systems.url = "github:nix-systems/x86_64-linux";
    flake-utils.url = "github:numtide/flake-utils";
    flake-utils.inputs.systems.follows = "systems";
  };

  outputs = {
    nixpkgs,
    flake-utils,
    ...
  }:
    flake-utils.lib.eachDefaultSystem (system: let
      pkgs = nixpkgs.legacyPackages.${system};
    in {
      devShell = pkgs.mkShell {
        buildInputs = with pkgs; [
          nodePackages.prettier
          nodePackages.eslint
          nodePackages.eslint_d
          nodePackages.typescript-language-server
          nodePackages.node-gyp
          tree-sitter
          cppcheck
          clang-tools
        ];
      };
    });
}
