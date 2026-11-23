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
