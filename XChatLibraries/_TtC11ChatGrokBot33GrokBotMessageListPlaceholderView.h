//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot33GrokBotMessageListPlaceholderView_h
#define _TtC11ChatGrokBot33GrokBotMessageListPlaceholderView_h
@import Foundation;

@class ChatGrokBot.GrokBotActivityIndicatorView, ChatGrokBot.GrokBotMessageListPlaceholderView.State, UIView, _$sScTyyt _$ss5NeverOMn ?, _$sSo7UILabelC, _$sSo8UIButtonC, _$syycSg;

@interface ChatGrokBot.GrokBotMessageListPlaceholderView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onTapRetry;
    ChatGrokBot.GrokBotActivityIndicatorView activityIndicatorView;
    __C.UILabel messageLabel;
    __C.UIButton retryButton;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadingIndicatorTask;
    ChatGrokBot.GrokBotMessageListPlaceholderView.State state;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTapRetry;

@end

#endif /* _TtC11ChatGrokBot33GrokBotMessageListPlaceholderView_h */
