#include "KBSteppingAction.hh"

#include "G4Event.hh"

KBSteppingAction::KBSteppingAction()
: G4UserSteppingAction()
{
}

void KBSteppingAction::UserSteppingAction(const G4Step* step)
{
  G4cout << step -> GetPreStepPoint() -> GetGlobalTime() << G4endl;
}
