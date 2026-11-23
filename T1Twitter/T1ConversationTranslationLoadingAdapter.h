//
#ifndef T1ConversationTranslationLoadingAdapter_h
#define T1ConversationTranslationLoadingAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1ConversationTranslationLoadingAdapter : TFNComposableViewAdapter

@property (nonatomic) unsigned long long contextDisplayType;

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier translationContextDisplayType:(unsigned long long)type;
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)_t1_startActivityForViewModel:(id)model andView:(id)view;

@end

#endif /* T1ConversationTranslationLoadingAdapter_h */
