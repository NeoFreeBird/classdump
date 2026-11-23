//
#ifndef UIView_TFNViewControllerExecutionContext_h
#define UIView_TFNViewControllerExecutionContext_h
@import Foundation;

#include "TFNExecutionContext-Protocol.h"

@class NSArray, NSObject, NSString, UIResponder, UIViewController, UIWindow;

@interface UIView (TFNViewControllerExecutionContext)

/* instance methods */
- (id)_tfn_viewControllerExecutionContextFirstResponder;

@end

#endif /* UIView_TFNViewControllerExecutionContext_h */
