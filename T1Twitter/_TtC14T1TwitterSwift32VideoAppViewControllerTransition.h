//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift32VideoAppViewControllerTransition_h
#define _TtC14T1TwitterSwift32VideoAppViewControllerTransition_h
@import Foundation;

#include "T1CardAppStoreCustomizedPresentationDelegate-Protocol.h"
#include "_TtC14T1TwitterSwift35VideoHeaderViewControllerTransition.h"

@interface T1TwitterSwift.VideoAppViewControllerTransition : T1TwitterSwift.VideoHeaderViewControllerTransition <T1CardAppStoreCustomizedPresentationDelegate> // (Swift)

/* instance methods */
- (_Bool)customizeAppStoreViewControllerPresentationIfNeeded;
- (long long)presentationStyle;
- (id)transitioningDelegate;
- (id)presentingViewController;
- (void)appStoreControllerDidDismiss;
- (void)mediaContentTransition;

@end

#endif /* _TtC14T1TwitterSwift32VideoAppViewControllerTransition_h */
