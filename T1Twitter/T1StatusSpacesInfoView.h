//
#ifndef T1StatusSpacesInfoView_h
#define T1StatusSpacesInfoView_h
@import Foundation;

@class UILabel, UIView;

@interface T1StatusSpacesInfoView : UIView

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIView *infoBackgroundView;

/* class methods */
+ (id)infoFont;
+ (id)infoColor;
+ (id)infoBackgroundColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;

@end

#endif /* T1StatusSpacesInfoView_h */
