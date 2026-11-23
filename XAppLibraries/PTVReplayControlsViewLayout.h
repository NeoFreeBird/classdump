//
#ifndef PTVReplayControlsViewLayout_h
#define PTVReplayControlsViewLayout_h
@import Foundation;

@class NSObject, UITraitCollection;

@interface PTVReplayControlsViewLayout : NSObject

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } playButtonSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } activityIndicatorSize;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } fittingSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playButtonFrame;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } playButtonHitTestEdgeInsets;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } errorLabelFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } activityIndicatorFrame;

/* class methods */
+ (id)AttributedStringWithErrorTitle:(id)title Subtitle:(id)subtitle;
+ (double)ErrorTitleLineSpacing;
+ (id)ErrorTitleFont;
+ (id)ErrorSubtitleFont;

/* instance methods */
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })size playButtonSize:(struct CGSize { double x0; double x1; })size activityIndicatorSize:(struct CGSize { double x0; double x1; })size;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })size playButtonSize:(struct CGSize { double x0; double x1; })size activityIndicatorSize:(struct CGSize { double x0; double x1; })size traitCollection:(id)collection;
- (double)errorLabelHeight;

@end

#endif /* PTVReplayControlsViewLayout_h */
