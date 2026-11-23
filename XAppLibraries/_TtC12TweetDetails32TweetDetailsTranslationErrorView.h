//
#ifndef _TtC12TweetDetails32TweetDetailsTranslationErrorView_h
#define _TtC12TweetDetails32TweetDetailsTranslationErrorView_h
@import Foundation;

@class UIView, _$sSo7UILabelC, _$sSo9TFNButtonCSg, _$syycSg;

@interface TweetDetails.TweetDetailsTranslationErrorView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    __C.TFNButton? $__lazy_storage_$_refetchTranslationButton;
    (() -> ())? onRefetchTranslationButtonTap;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTapRefetchButton;

@end

#endif /* _TtC12TweetDetails32TweetDetailsTranslationErrorView_h */
