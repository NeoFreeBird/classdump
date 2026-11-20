//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNScrollingAnimationState_h
#define TFNScrollingAnimationState_h
@import Foundation;

#include "TFSDisplayLink.h"

@class NSIndexPath, NSObject;

@interface TFNScrollingAnimationState : NSObject

@property (retain, nonatomic) TFSDisplayLink *displayLink;
@property (copy, nonatomic) id /* block */ destination;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) struct CGPoint { double x0; double x1; } startContentOffset;
@property (retain, nonatomic) NSIndexPath *startIndexPath;
@property (nonatomic) struct CGPoint { double x0; double x1; } startCellOffset;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;

/* instance methods */

@end

#endif /* TFNScrollingAnimationState_h */
