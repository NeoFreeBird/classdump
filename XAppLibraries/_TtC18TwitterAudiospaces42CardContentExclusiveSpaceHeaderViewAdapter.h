//
#ifndef _TtC18TwitterAudiospaces42CardContentExclusiveSpaceHeaderViewAdapter_h
#define _TtC18TwitterAudiospaces42CardContentExclusiveSpaceHeaderViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter, _$sSD -> TwitterAudiospaces.CardContentViewModelDisplayMode __C.UIEdgeInsets;

@interface TwitterAudiospaces.CardContentExclusiveSpaceHeaderViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    Swift.Dictionary -> TwitterAudiospaces.CardContentViewModelDisplayMode __C.UIEdgeInsets layoutMargins;
}

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* _TtC18TwitterAudiospaces42CardContentExclusiveSpaceHeaderViewAdapter_h */
