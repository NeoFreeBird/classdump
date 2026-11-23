//
#ifndef T1ConversationTranslatedBodyAdapter_h
#define T1ConversationTranslatedBodyAdapter_h
@import Foundation;

#include "T1StandardStatusBodyViewAdapter.h"

@interface T1ConversationTranslatedBodyAdapter : T1StandardStatusBodyViewAdapter

@property (nonatomic) unsigned long long contextDisplayType;

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier translationContextDisplayType:(unsigned long long)type displayLocation:(unsigned long long)location;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setViewModel:(id)model forView:(id)view;
- (id)translatedViewModelForViewModel:(id)model;

@end

#endif /* T1ConversationTranslatedBodyAdapter_h */
