//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIFollowControlCustomScreenshot_h
#define TUIFollowControlCustomScreenshot_h
@import Foundation;

@class UIImageView, UIView;

@interface TUIFollowControlCustomScreenshot : UIView {
    /* instance variables */
    UIImageView *_tagImageView;
    _Bool _showLogoOnly;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)showLogoOnly;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

#endif /* TUIFollowControlCustomScreenshot_h */
