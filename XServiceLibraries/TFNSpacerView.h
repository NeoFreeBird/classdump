//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSpacerView_h
#define TFNSpacerView_h
@import Foundation;

@class UIView;

@interface TFNSpacerView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;

/* class methods */
+ (_Bool)requiresConstraintBasedLayout;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (void)willRemoveSubview:(id)subview;
- (void)tfn_intrinsicContentSizeInvalidatedForChildView:(id)view;

@end

#endif /* TFNSpacerView_h */
