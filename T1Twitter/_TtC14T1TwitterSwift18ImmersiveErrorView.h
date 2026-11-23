//
#ifndef _TtC14T1TwitterSwift18ImmersiveErrorView_h
#define _TtC14T1TwitterSwift18ImmersiveErrorView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo26TFNActivityIndicatorButtonC, _$sSo7UILabelC;

@interface T1TwitterSwift.ImmersiveErrorView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView imageView;
    __C.UILabel headerLabel;
    __C.UILabel subheaderLabel;
    __C.TFNActivityIndicatorButton retryButton;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)tfn_fontSizeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift18ImmersiveErrorView_h */
