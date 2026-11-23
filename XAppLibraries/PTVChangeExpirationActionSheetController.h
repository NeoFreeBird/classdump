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
