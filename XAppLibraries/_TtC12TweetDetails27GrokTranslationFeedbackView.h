//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12TweetDetails27GrokTranslationFeedbackView_h
#define _TtC12TweetDetails27GrokTranslationFeedbackView_h
@import Foundation;

@class Swift.Bool, TweetDetails.GrokTranslationFeedbackState _$scSg ->, TweetDetails.GrokTranslationFeedbackView.Config, TweetDetails.GrokTranslationFeedbackViewState, TweetDetails.VoteButton, UIView, _$sSo23UIActivityIndicatorViewC, _$sSo7UILabelC;

@interface TweetDetails.GrokTranslationFeedbackView : UIView { // (Swift)
    /* instance variables */
    TweetDetails.GrokTranslationFeedbackViewState state;
    TweetDetails.GrokTranslationFeedbackState _$scSg -> action;
    Swift.Bool isEnabled;
    TweetDetails.GrokTranslationFeedbackView.Config config;
    __C.UILabel captionLabel;
    TweetDetails.VoteButton upVoteButton;
    TweetDetails.VoteButton downVoteButton;
    __C.UIActivityIndicatorView progressIndicator;
}

/* instance methods */
- (void)traitCollectionDidChange:(id)change;
- (void)applyLayout:(id)layout;
- (id)initWithConfig:(id)config;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12TweetDetails27GrokTranslationFeedbackView_h */
