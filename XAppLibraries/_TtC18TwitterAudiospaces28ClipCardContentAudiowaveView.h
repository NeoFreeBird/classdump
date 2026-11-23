//
#ifndef _TtC18TwitterAudiospaces28ClipCardContentAudiowaveView_h
#define _TtC18TwitterAudiospaces28ClipCardContentAudiowaveView_h
@import Foundation;

@class TwitterAudiospaces.ClipCardContentViewModel ?, TwitterAudiospaces.PlaybackAudiowaveView, UIView, _$sSo11UIStackViewCSg, _$sSo7UILabelCSg;

@interface TwitterAudiospaces.ClipCardContentAudiowaveView : UIView { // (Swift)
    /* instance variables */
    TwitterAudiospaces.PlaybackAudiowaveView playbackAudiowave;
    TwitterAudiospaces.ClipCardContentViewModel ? viewModel;
    __C.UILabel? $__lazy_storage_$_remainingTimeLabel;
    __C.UIStackView? $__lazy_storage_$_stackView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC18TwitterAudiospaces28ClipCardContentAudiowaveView_h */
