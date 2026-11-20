//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem15TrayManagerView_h
#define _TtC13XDesignSystem15TrayManagerView_h
@import Foundation;

@class UIView, XDesignSystem.TrayScreenshotBezelView, _$sSo6UIViewC;

@interface XDesignSystem.TrayManagerView : UIView { // (Swift)
    /* instance variables */
    __C.UIView dimmingView;
    XDesignSystem.TrayScreenshotBezelView screenshotBezelView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC13XDesignSystem15TrayManagerView_h */
