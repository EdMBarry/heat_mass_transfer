fvScalarMatrix BEqn
(
    fvm::ddt(B)
    + fvm::div(phi, B)
    - fvm::laplacian(DB, B)
    ==
      fvOptions(B)
);
