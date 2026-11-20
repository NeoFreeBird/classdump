//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewControllerInteractiveTransitioning_Protocol_h
#define UIViewControllerInteractiveTransitioning_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIViewControllerInteractiveTransitioning <NSObject>

@required

@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

/* required instance methods */
- (void)startInteractiveTransition:(id)transition;

@optional

@end

#endif /* UIViewControllerInteractiveTransitioning_Protocol_h */
