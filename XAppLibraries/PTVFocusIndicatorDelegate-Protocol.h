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
