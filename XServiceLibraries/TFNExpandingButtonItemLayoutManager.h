//
#ifndef TFNExpandingButtonItemLayoutManager_h
#define TFNExpandingButtonItemLayoutManager_h
@import Foundation;

@class NSObject;

@interface TFNExpandingButtonItemLayoutManager : NSObject

@property (nonatomic) struct CGPoint { double x0; double x1; } centerPoint;
@property (nonatomic) double minAngle;
@property (nonatomic) double maxAngle;
@property (nonatomic) unsigned long long count;
@property (nonatomic) double maxRadius;

/* instance methods */
- (id)init;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x1; })layoutAtIndex:(unsigned long long)index withProgress:(double)progress;
- (struct CGPoint { double x0; double x1; })_tfn_positionAtIndex:(unsigned long long)index withProgress:(double)progress;

@end

#endif /* TFNExpandingButtonItemLayoutManager_h */
