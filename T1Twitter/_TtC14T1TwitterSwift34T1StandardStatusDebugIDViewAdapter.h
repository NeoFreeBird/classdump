//
#ifndef _TtC14T1TwitterSwift34T1StandardStatusDebugIDViewAdapter_h
#define _TtC14T1TwitterSwift34T1StandardStatusDebugIDViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1TwitterSwift.T1StandardStatusDebugIDViewAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)handleTap:(id)tap;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setLayoutState:(id)state forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* _TtC14T1TwitterSwift34T1StandardStatusDebugIDViewAdapter_h */
