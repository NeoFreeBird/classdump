//
#ifndef _TtC7Profile25ScreenshotWatermarkUIView_h
#define _TtC7Profile25ScreenshotWatermarkUIView_h
@import Foundation;

@class Profile.ScreenshotSubstituteView, UIView, _$sSo32TFNCustomScreenshotContainerViewCSg;

@interface Profile.ScreenshotWatermarkUIView : UIView { // (Swift)
    /* instance variables */
    Profile.ScreenshotSubstituteView customScreenshotView;
    __C.TFNCustomScreenshotContainerView? secureContainer;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7Profile25ScreenshotWatermarkUIView_h */
