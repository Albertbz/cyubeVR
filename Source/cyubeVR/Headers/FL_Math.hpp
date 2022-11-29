#ifndef UE4SS_SDK_FL_Math_HPP
#define UE4SS_SDK_FL_Math_HPP

class UFL_Math_C : public UBlueprintFunctionLibrary
{

    void IsPointInSphere(FVector SphereCenter, float SphereRadius, FVector Point, class UObject* __WorldContext, bool& IsInside);
    void GetAngleBetweenVectors(FVector A, FVector B, class UObject* __WorldContext, float& Angle);
    void GridLocationToBlock(FVector Location, class UObject* __WorldContext, FVector& BlockLocation);
    void GridVector2D(FVector2D Vector2D, float GridSize, class UObject* __WorldContext, FVector2D& GridVector2D);
    void GridVectorBP(FVector Vector, float GridSize, class UObject* __WorldContext, FVector& NewVector);
    void VectorToString(FVector Vector, class UObject* __WorldContext, FString& String);
    void IsPointInBoundingBox3D(FVector Point, FVector BoxCenter, FVector BoxExtend, class UObject* __WorldContext, bool& TRUE);
    void IsPointInBoundingBox2D(FVector2D Point, FVector2D BoxCenter, FVector2D BoxExtend, class UObject* __WorldContext, bool& TRUE);
};

#endif
