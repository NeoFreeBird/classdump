//
#ifndef TFNFloatingActionButtonSubItemLayoutManager_h
#define TFNFloatingActionButtonSubItemLayoutManager_h
@import Foundation;

#include "TFNExpandingButtonItemLayoutManager.h"

@interface TFNFloatingActionButtonSubItemLayoutManager : TFNExpandingButtonItemLayoutManager

@property (nonatomic) double initialRotation;

/* instance methods */
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x1; })layoutAtIndex:(unsigned long long)index withProgress:(double)progress;
- (double)_tfn_scaleAtIndex:(unsigned long long)index withProgress:(double)progress;
- (double)_tfn_rotationAtIndex:(unsigned long long)index withProgress:(double)progress;

@end

#endif /* TFNFloatingActionButtonSubItemLayoutManager_h */
