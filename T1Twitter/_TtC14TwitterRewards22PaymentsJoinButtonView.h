//
#ifndef _TtC14TwitterRewards22PaymentsJoinButtonView_h
#define _TtC14TwitterRewards22PaymentsJoinButtonView_h
@import Foundation;

@class TwitterRewards.PaymentsJoinButtonRowAdapterDelegate ?, TwitterRewards.PaymentsJoinButtonViewModel ?, UIView, _$sSo11UIImageViewCSg, _$sSo26TFNActivityIndicatorButtonC;

@interface TwitterRewards.PaymentsJoinButtonView : UIView { // (Swift)
    /* instance variables */
    TwitterRewards.PaymentsJoinButtonViewModel ? viewModel;
    TwitterRewards.PaymentsJoinButtonRowAdapterDelegate ? delegate;
    __C.TFNActivityIndicatorButton joinButton;
    __C.UIImageView? backgroundImageView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapJoinButton;

@end

#endif /* _TtC14TwitterRewards22PaymentsJoinButtonView_h */
