//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestRoomParticipantsDelegate_Protocol_h
#define PTVGuestRoomParticipantsDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestRoomParticipantsDelegate <NSObject>

@required

/* required instance methods */
- (void)guestRoomParticipantsDidUpdateUsers:(id)users;
- (void)guestRoomParticipantsDidUpdateAudioLevels:(id)levels;

@optional

@end

#endif /* PTVGuestRoomParticipantsDelegate_Protocol_h */
