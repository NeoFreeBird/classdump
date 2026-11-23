//
#ifndef T1VoiceViewDelegate_Protocol_h
#define T1VoiceViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceViewDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceViewWasTapped:(id)tapped;

@optional

@end

#endif /* T1VoiceViewDelegate_Protocol_h */
