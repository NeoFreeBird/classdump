//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
