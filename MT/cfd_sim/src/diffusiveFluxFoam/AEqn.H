fvScalarMatrix AEqn
(
    fvm::ddt(A)
    + fvm::div(phi, A)
    - fvm::laplacian(DA, A)
    ==
      fvOptions(A)
);
