//
#ifndef T1LiveEventControlBarDelegate_Protocol_h
#define T1LiveEventControlBarDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventControlBarDelegate <NSObject>

@required

/* required instance methods */
- (void)liveEventControlBarDidTapExpandMedia:(id)media;
- (void)liveEventControlBar:(id)bar didTapToPlay:(_Bool)play;

@optional

/* optional instance methods */
- (void)liveEventControlBar:(id)bar didTapAttributionForStatus:(id)status;
- (void)liveEventControlBar:(id)bar didUpdateMuteState:(_Bool)state;

@end

#endif /* T1LiveEventControlBarDelegate_Protocol_h */
