//
#ifndef T1ConfirmActionTray_h
#define T1ConfirmActionTray_h
@import Foundation;

@class NSObject;

@interface T1ConfirmActionTray : NSObject // (Swift)

/* class methods */
+ (_Bool)presentFromViewController:(id)controller iconName:(id)name title:(id)title onConfirm:(id /* block */)confirm;

/* instance methods */
- (id)init;

@end

#endif /* T1ConfirmActionTray_h */
