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
