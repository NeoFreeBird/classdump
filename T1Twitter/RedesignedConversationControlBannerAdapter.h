//
#ifndef RedesignedConversationControlBannerAdapter_h
#define RedesignedConversationControlBannerAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface RedesignedConversationControlBannerAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* RedesignedConversationControlBannerAdapter_h */
