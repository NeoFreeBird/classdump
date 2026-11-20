//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVFocusIndicatorDelegate_Protocol_h
#define PTVFocusIndicatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVFocusIndicatorDelegate <NSObject>

@required

/* required instance methods */
- (void)focusIndicatorDidFinishAnimating:(id)animating;

@optional

@end

#endif /* PTVFocusIndicatorDelegate_Protocol_h */
