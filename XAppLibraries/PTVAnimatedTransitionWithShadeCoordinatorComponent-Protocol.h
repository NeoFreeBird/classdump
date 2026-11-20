//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAnimatedTransitionWithShadeCoordinatorComponent_Protocol_h
#define PTVAnimatedTransitionWithShadeCoordinatorComponent_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVAnimatedTransitionWithShadeCoordinatorComponent <NSObject>

@required

/* required instance methods */
- (double)heightOfViewToBeAnimatedForContainerSize:(struct CGSize { double x0; double x1; })size;

@optional

@end

#endif /* PTVAnimatedTransitionWithShadeCoordinatorComponent_Protocol_h */
