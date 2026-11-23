//
#ifndef XDSAlert_h
#define XDSAlert_h
@import Foundation;

@class NSObject;

@interface XDSAlert : NSObject // (Swift)

/* class methods */
+ (id)presentWithTitle:(id)title message:(id)message actions:(id)actions fromViewController:(id)controller;
+ (id)presentWithTitle:(id)title message:(id)message actions:(id)actions layout:(long long)layout fromViewController:(id)controller;
+ (id)alertViewControllerWithTitle:(id)title message:(id)message actions:(id)actions layout:(long long)layout;

/* instance methods */
- (id)init;

@end

#endif /* XDSAlert_h */
