//
#ifndef _TtC14T1TwitterSwift33T1StatusInlineFeedbackViewAdapter_h
#define _TtC14T1TwitterSwift33T1StatusInlineFeedbackViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1TwitterSwift.T1StatusInlineFeedbackViewAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;

@end

#endif /* _TtC14T1TwitterSwift33T1StatusInlineFeedbackViewAdapter_h */
