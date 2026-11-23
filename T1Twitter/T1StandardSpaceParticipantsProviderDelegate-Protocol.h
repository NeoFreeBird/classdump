//
#ifndef T1StandardSpaceParticipantsProviderDelegate_Protocol_h
#define T1StandardSpaceParticipantsProviderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1StandardSpaceParticipantsProviderDelegate <NSObject>

@required

/* required instance methods */
- (void)participantsProvider:(id)provider didReloadAudiospace:(id)audiospace;

@optional

@end

#endif /* T1StandardSpaceParticipantsProviderDelegate_Protocol_h */
