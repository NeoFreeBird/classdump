//
#ifndef TFNActiveRangeGestureHandler_Protocol_h
#define TFNActiveRangeGestureHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNActiveRangeGestureHandler <NSObject>

@required

/* required instance methods */
- (id)activeRangeGestureBeganAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)activeRangeGestureEnded;
- (id)activeRangeGestureCancelled;
- (id)activeRangeHoverBeganAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)activeRangeHoverEnded;

@optional

@end

#endif /* TFNActiveRangeGestureHandler_Protocol_h */
