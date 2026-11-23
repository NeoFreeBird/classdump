//
#ifndef T1LiveEventMediaViewInteractionDelegate_Protocol_h
#define T1LiveEventMediaViewInteractionDelegate_Protocol_h
@import Foundation;

#include "T1LiveEventMediaViewPlaybackDelegate-Protocol.h"

@protocol T1LiveEventMediaViewInteractionDelegate <T1LiveEventMediaViewPlaybackDelegate>

@required

/* required instance methods */
- (void)liveEventMediaView:(id)view didTapToPlay:(_Bool)play;
- (void)liveEventMediaView:(id)view didUpdateMuteState:(_Bool)state;
- (void)liveEventMediaView:(id)view didTapToExpandBroadcast:(id)broadcast cardDataSource:(id)source;
- (void)liveEventMediaView:(id)view didTapToExpandBroadcast:(id)broadcast cardDataSource:(id)source;
- (void)liveEventMediaView:(id)view didTapToExpandMedia:(id)media previewImage:(id)image;
- (void)liveEventMediaView:(id)view didTapAttributionForStatus:(id)status;
- (void)liveEventMediaView:(id)view didTapAttributionForStatus:(id)status;
- (void)liveEventMediaViewDidTapInitialPlayButton:(id)button;
- (void)liveEventMediaViewDidTapAudiospaceActionButton:(id)button;

@optional

@end

#endif /* T1LiveEventMediaViewInteractionDelegate_Protocol_h */
