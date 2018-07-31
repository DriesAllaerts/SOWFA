if (subtractMeanVerticalVelocity)
{
    // Get the planar-average of fields, including the vertical velocity field.
    #include "averageFields.H"

    // Subtract off the mean vertical velocity.
    forAll(U,cellI)
    {
        U[cellI].z() -= Umean[cellI].z();
    }
}
