//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ShareSheet25ShareTrayConfirmShareView_h
#define _TtC10ShareSheet25ShareTrayConfirmShareView_h
@import Foundation;

@class ShareSheet.BrandShareControl, ShareSheet.CircleIconControl, UIView, _$syycSg;

@interface ShareSheet.ShareTrayConfirmShareView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? didTapShare;
    (() -> ())? didTapBack;
    ShareSheet.CircleIconControl backButton;
    ShareSheet.BrandShareControl shareButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10ShareSheet25ShareTrayConfirmShareView_h */
