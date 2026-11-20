//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChangeExpirationActionSheetController_h
#define PTVChangeExpirationActionSheetController_h
@import Foundation;

#include "PTVActionSheetController.h"

@interface PTVChangeExpirationActionSheetController : PTVActionSheetController

/* class methods */
+ (id)ChangeExpirationActionSheetForBroadcast:(id)broadcast Delegate:(id)delegate;
+ (id)ActionSheetTitleForBroadcast:(id)broadcast;
+ (void)ChangeExpirationOfBroadcast:(id)broadcast AutoDelete:(_Bool)_delete LoggedInUser:(id)user;

@end

#endif /* PTVChangeExpirationActionSheetController_h */
