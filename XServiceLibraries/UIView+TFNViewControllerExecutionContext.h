//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
