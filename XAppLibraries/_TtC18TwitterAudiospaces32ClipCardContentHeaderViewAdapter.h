//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18TwitterAudiospaces32ClipCardContentHeaderViewAdapter_h
#define _TtC18TwitterAudiospaces32ClipCardContentHeaderViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface TwitterAudiospaces.ClipCardContentHeaderViewAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* _TtC18TwitterAudiospaces32ClipCardContentHeaderViewAdapter_h */
