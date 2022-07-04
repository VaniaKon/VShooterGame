// Shoot Them Up Game, All Rights Reserved.


#include "Components/STUCharacterMovementComponent.h"
#include "Player/STUBaseCharacter.h"

float USTUCharacterMovementComponent::GetMaxSpeed() const
{
  const float MaxSpeed = Super::GetMaxSpeed();
  const ASTUBaseCharacter* Player = Cast<ASTUBaseCharacter>(GetOwner());
  return Player && Player->IsRunning() ? MaxSpeed * RunModifier: MaxSpeed;
}