//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift24ScreenShotProtectionView_h
#define _TtC10TFNUISwift24ScreenShotProtectionView_h
@import Foundation;

@class Swift.Bool, UIColor, UIView, _$sSo6UIViewC, _$sSo6UIViewCSg;

@interface TFNUISwift.ScreenShotProtectionView : UIView { // (Swift)
    /* instance variables */
    __C.UIView contentBackgroundView;
    __C.UIView secureContainerView;
}

@property (nonatomic) _Bool hidesContentOnScreenShot;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *alternateContentView;
@property (nonatomic, retain) UIColor *contentBackgroundColor;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)sizeToFit;

@end

#endif /* _TtC10TFNUISwift24ScreenShotProtectionView_h */
