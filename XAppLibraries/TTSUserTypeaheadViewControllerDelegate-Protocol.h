//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
