//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
