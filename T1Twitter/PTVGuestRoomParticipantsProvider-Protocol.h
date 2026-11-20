//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestRoomParticipantsProvider_Protocol_h
#define PTVGuestRoomParticipantsProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestRoomParticipantsProvider <NSObject>

@required

/* required instance methods */
- (void)fetchParticipantsWithProviderContext:(id)context completion:(id /* block */)completion;
- (void)fetchParticipantsWithProviderContext:(id)context completion:(id /* block */)completion;

@optional

@end

#endif /* PTVGuestRoomParticipantsProvider_Protocol_h */
