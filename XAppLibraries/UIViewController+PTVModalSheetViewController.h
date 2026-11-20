//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_PTVModalSheetViewController_h
#define UIViewController_PTVModalSheetViewController_h
@import Foundation;

#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIColor, UIView, UIViewController;

@interface UIViewController (PTVModalSheetViewController)

/* instance methods */
- (id)ptv_modalSheetViewController;

@end

#endif /* UIViewController_PTVModalSheetViewController_h */
