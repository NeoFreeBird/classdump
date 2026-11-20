//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor31MediaStyleTrayCustomColorButton_h
#define _TtC12XPhotoEditor31MediaStyleTrayCustomColorButton_h
@import Foundation;

@class UIView, XDesignSystem.Button, XPhotoEditor.MediaStyleTrayCustomColorButton.Role, XPhotoEditor.MediaStyleTrayCustomColorButton.State;

@interface XPhotoEditor.MediaStyleTrayCustomColorButton : UIView { // (Swift)
    /* instance variables */
    XPhotoEditor.MediaStyleTrayCustomColorButton.State state;
    XPhotoEditor.MediaStyleTrayCustomColorButton.Role _role;
    XDesignSystem.Button _button;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor31MediaStyleTrayCustomColorButton_h */
