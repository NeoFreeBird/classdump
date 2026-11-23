//
#ifndef PTVCameraGridView_h
#define PTVCameraGridView_h
@import Foundation;

#include "PTVCameraGridLevelPlusView.h"

@class CMMotionManager, NSMutableArray, NSOperationQueue, UIColor, UIView;

@interface PTVCameraGridView : UIView

@property (retain, nonatomic) UIColor *lightLineColor;
@property (retain, nonatomic) UIColor *darkLineColor;
@property (retain, nonatomic) UIColor *exactLevelLineColor;
@property (retain, nonatomic) NSMutableArray *gridLineShapes;
@property (retain, nonatomic) NSOperationQueue *motionQueue;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) PTVCameraGridLevelPlusView *plusLevelView;
@property (retain, nonatomic) PTVCameraGridLevelPlusView *backgroundPlusView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)ptv_createPlusLevel;
- (void)ptv_createGrid;
- (void)startLevel;
- (void)ptv_handleMotion:(id)motion;
- (void)stopLevel;

@end

#endif /* PTVCameraGridView_h */
