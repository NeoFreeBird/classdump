//
#ifndef T1StandardStatusTweetstormIndicatorViewAdapter_h
#define T1StandardStatusTweetstormIndicatorViewAdapter_h
@import Foundation;

#include "T1StatusContextIndicatorViewDelegate-Protocol.h"

@class NSString, TFNComposableViewAdapter;

@interface T1StandardStatusTweetstormIndicatorViewAdapter : TFNComposableViewAdapter <T1StatusContextIndicatorViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)textMidYOffset;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)statusContextIndicatorViewDidTap:(id)tap;

@end

#endif /* T1StandardStatusTweetstormIndicatorViewAdapter_h */
