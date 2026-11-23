//
#ifndef _TtC18TwitterAudiospaces21CardContentActionView_h
#define _TtC18TwitterAudiospaces21CardContentActionView_h
@import Foundation;

@class TwitterAudiospaces.CardContentActionViewDelegate ?, TwitterAudiospaces.CardContentViewModel ?, UIView, _$sSaySo6UIViewCGSg, _$sSo9TFNButtonCSg;

@interface TwitterAudiospaces.CardContentActionView : UIView { // (Swift)
    /* instance variables */
    TwitterAudiospaces.CardContentActionViewDelegate ? delegate;
    __C.TFNButton? $__lazy_storage_$_button;
    TwitterAudiospaces.CardContentViewModel ? viewModel;
    [__C.UIView]? $__lazy_storage_$_actionViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)handleTapOnActionButton:(id)button;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* _TtC18TwitterAudiospaces21CardContentActionView_h */
