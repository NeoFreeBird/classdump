//
#ifndef T1TabbedAppNavigationViewControllerActionContext_h
#define T1TabbedAppNavigationViewControllerActionContext_h
@import Foundation;

@class NSObject, UIViewController;

@interface T1TabbedAppNavigationViewControllerActionContext : NSObject

@property (readonly, weak, nonatomic) UIViewController *viewController;

/* instance methods */
- (id)init;
- (id)initWithViewController:(id)controller;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1TabbedAppNavigationViewControllerActionContext_h */
