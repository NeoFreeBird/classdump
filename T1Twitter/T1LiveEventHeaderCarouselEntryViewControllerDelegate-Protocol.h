//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventHeaderCarouselEntryViewControllerDelegate_Protocol_h
#define T1LiveEventHeaderCarouselEntryViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventHeaderCarouselEntryViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (id)scribeContextForLiveEventHeaderCarouselEntryViewController:(id)controller;
- (void)liveEventCarouselEntryViewController:(id)controller didTapAttributionForStatus:(id)status;
- (void)liveEventCarouselEntryViewController:(id)controller didTapAttribution:(id)attribution;
- (void)liveEventCarouselEntryViewController:(id)controller didTapExpandMediaForStatus:(id)status previewImage:(id)image mediaInfo:(id)info;
- (void)liveEventCarouselEntryViewController:(id)controller didTapExpandMediaForImageInfo:(id)info previewImage:(id)image;
- (void)liveEventCarouselEntryViewController:(id)controller didTapExpandMediaForBroadcast:(id)broadcast cardDataSource:(id)source;
- (void)liveEventCarouselEntryViewControllerDidStartPlayback:(id)playback;
- (void)liveEventCarouselEntryViewControllerDidCompletePlayback:(id)playback;
- (void)liveEventCarouselEntryViewControllerDidObserveGeoblockingError:(id)error;
- (void)liveEventCarouselEntryViewController:(id)controller didTapToPlay:(_Bool)play;
- (void)liveEventCarouselEntryViewController:(id)controller didUpdateMuteState:(_Bool)state;
- (_Bool)liveEventCarouselEntryViewControllerShouldStartTransition:(id)transition;
- (void)liveEventCarouselEntryViewControllerDidTapAudiospaceActionButton:(id)button;

@optional

@end

#endif /* T1LiveEventHeaderCarouselEntryViewControllerDelegate_Protocol_h */
