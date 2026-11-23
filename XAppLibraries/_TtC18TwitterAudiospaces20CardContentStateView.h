//
#ifndef _TtC18TwitterAudiospaces20CardContentStateView_h
#define _TtC18TwitterAudiospaces20CardContentStateView_h
@import Foundation;

@class TwitterAudiospaces.CardContentViewModel ?, TwitterAudiospaces.TalkingIndicatorView, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface TwitterAudiospaces.CardContentStateView : UIView { // (Swift)
    /* instance variables */
    TwitterAudiospaces.TalkingIndicatorView talkingIndicatorView;
    __C.UIView? superFollowersView;
    __C.UIImageView iconImageView;
    __C.UIStackView? $__lazy_storage_$_stackView;
    __C.UILabel? $__lazy_storage_$_label;
    TwitterAudiospaces.CardContentViewModel ? viewModel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)calculatedLayoutMetrics;

@end

#endif /* _TtC18TwitterAudiospaces20CardContentStateView_h */
