//
#ifndef T1StandardStatusCommunityContextViewAdapter_h
#define T1StandardStatusCommunityContextViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusCommunityContextViewAdapter : TFNComposableViewAdapter

@property (nonatomic) unsigned long long displayType;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setLayoutState:(id)state forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)_t1_textColorWithOptions:(unsigned long long)options;

@end

#endif /* T1StandardStatusCommunityContextViewAdapter_h */
