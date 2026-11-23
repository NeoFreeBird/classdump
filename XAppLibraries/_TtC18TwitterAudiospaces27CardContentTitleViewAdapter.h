//
#ifndef _TtC18TwitterAudiospaces27CardContentTitleViewAdapter_h
#define _TtC18TwitterAudiospaces27CardContentTitleViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface TwitterAudiospaces.CardContentTitleViewAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* _TtC18TwitterAudiospaces27CardContentTitleViewAdapter_h */
