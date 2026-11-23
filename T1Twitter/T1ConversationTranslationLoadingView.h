//
#ifndef T1ConversationTranslationLoadingView_h
#define T1ConversationTranslationLoadingView_h
@import Foundation;

@class UIActivityIndicatorView, UILabel, UIView;

@interface T1ConversationTranslationLoadingView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *title;

/* instance methods */
- (id)init;
- (void)layoutSubviews;

@end

#endif /* T1ConversationTranslationLoadingView_h */
