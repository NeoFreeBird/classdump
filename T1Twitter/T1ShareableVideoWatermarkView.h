//
#ifndef T1ShareableVideoWatermarkView_h
#define T1ShareableVideoWatermarkView_h
@import Foundation;

@class UIView;

@interface T1ShareableVideoWatermarkView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *logoTileView;
    NSNumber"16@0:8 *handleLabel;
    NSNumber"16@0:8 *badgeView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (id)watermarkViewWithMediaEntity:(id)entity posterUserPerspective:(id)perspective;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)configureWithUserPerspective:(id)perspective;
- (_Bool)configureWithMediaSourceUser:(id)user;
- (void)reset;

@end

#endif /* T1ShareableVideoWatermarkView_h */
