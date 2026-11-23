//
#ifndef TTSUserTypeaheadViewControllerDelegate_Protocol_h
#define TTSUserTypeaheadViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTSUserTypeaheadViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)userTypeaheadViewControllerDidChangeUserSelection:(id)selection;
- (_Bool)userTypeaheadViewControllerCanSelectUser:(id)user;
- (id)userTypeaheadViewControllerNonSelectableReasonForUser:(id)user;

@optional

@end

#endif /* TTSUserTypeaheadViewControllerDelegate_Protocol_h */
