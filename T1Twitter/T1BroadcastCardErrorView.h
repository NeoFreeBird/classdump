//
#ifndef T1BroadcastCardErrorView_h
#define T1BroadcastCardErrorView_h
@import Foundation;

@class UIControl, UIImageView, UILabel, UIView;

@interface T1BroadcastCardErrorView : UIControl

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)title imageViewVisible:(_Bool)visible;
- (void)setHighlighted:(_Bool)highlighted;
- (void)setSelected:(_Bool)selected;
- (void)_t1_setBackgroundColor;

@end

#endif /* T1BroadcastCardErrorView_h */
