//
#ifndef _TtC10JetfuelSDK18VideoContainerView_h
#define _TtC10JetfuelSDK18VideoContainerView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo23UIActivityIndicatorViewC, _$sSo6UIViewC;

@interface JetfuelSDK.VideoContainerView : UIView { // (Swift)
    /* instance variables */
    __C.UIView videoPlayerView;
    __C.UIImageView posterImageView;
    __C.UIActivityIndicatorView spinner;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC10JetfuelSDK18VideoContainerView_h */
