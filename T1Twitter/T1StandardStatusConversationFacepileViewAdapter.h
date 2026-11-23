//
#ifndef T1StandardStatusConversationFacepileViewAdapter_h
#define T1StandardStatusConversationFacepileViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusConversationFacepileViewAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setLayoutState:(id)state forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusConversationFacepileViewAdapter_h */
