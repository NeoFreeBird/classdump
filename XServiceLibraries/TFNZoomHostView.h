//
#ifndef TFNZoomHostView_h
#define TFNZoomHostView_h
@import Foundation;

@class UIView;

@interface TFNZoomHostView : UIView

@property (readonly, nonatomic) UIView *contentView;

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (id)initWithContentView:(id)view;

@end

#endif /* TFNZoomHostView_h */
