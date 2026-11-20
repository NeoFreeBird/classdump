//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7Creator32CreatorPreProfileEligibilityView_h
#define _TtC7Creator32CreatorPreProfileEligibilityView_h
@import Foundation;

@class Creator.CreatorPreProfileEligibilityViewDelegate ?, UIView, _$sSo11UIImageViewC, _$sSo12UIScrollViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo9TFNButtonCSg;

@interface Creator.CreatorPreProfileEligibilityView : UIView { // (Swift)
    /* instance variables */
    Creator.CreatorPreProfileEligibilityViewDelegate ? delegate;
    __C.UIView contentWrapperView;
    __C.UIScrollView contentScrollView;
    __C.UIView contentView;
    __C.UIImageView imageView;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    __C.TFNButton? $__lazy_storage_$_completeButton;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)completeTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7Creator32CreatorPreProfileEligibilityView_h */
