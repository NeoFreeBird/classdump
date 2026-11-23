//
#ifndef PTVCameraGridLevelPlusView_h
#define PTVCameraGridLevelPlusView_h
@import Foundation;

@class NSMutableArray, UIColor, UIView;

@interface PTVCameraGridLevelPlusView : UIView

@property (retain, nonatomic) NSMutableArray *lineShapes;
@property (retain, nonatomic) UIColor *lightLineColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)ptv_createPlus;

@end

#endif /* PTVCameraGridLevelPlusView_h */
