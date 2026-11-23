//
#ifndef TFNLayoutableView_h
#define TFNLayoutableView_h
@import Foundation;

@class UIView;
@protocol TFNLayoutableViewLayoutDelegate;

@interface TFNLayoutableView : UIView

@property (weak, nonatomic) id <TFNLayoutableViewLayoutDelegate> layoutDelegate;
@property (retain, nonatomic) id layoutState;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

#endif /* TFNLayoutableView_h */
