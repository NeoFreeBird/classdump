//
#ifndef TFNStatusInlineCalloutViewAbstractAdapter_h
#define TFNStatusInlineCalloutViewAbstractAdapter_h
@import Foundation;

#include "TFNComposableViewAdapter.h"

@interface TFNStatusInlineCalloutViewAbstractAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)inlineCalloutConfigurationFor:(id)_for;
- (id)initializeView;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* TFNStatusInlineCalloutViewAbstractAdapter_h */
