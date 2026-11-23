//
#ifndef TTSUserSelectionViewControllerDelegate_Protocol_h
#define TTSUserSelectionViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTSUserSelectionViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)userSelectionViewControllerDidChangeUserSelection:(id)selection;
- (_Bool)userSelectionViewController:(id)controller canSelectUser:(id)user;
- (_Bool)userSelectionViewController:(id)controller canSelectUser:(id)user;
- (id)userSelectionViewController:(id)controller nonSelectableReasonForUser:(id)user;
- (id)userSelectionViewController:(id)controller nonSelectableReasonForUser:(id)user;

@optional

@end

#endif /* TTSUserSelectionViewControllerDelegate_Protocol_h */
