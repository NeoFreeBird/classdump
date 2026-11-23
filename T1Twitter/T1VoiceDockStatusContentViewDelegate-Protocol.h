//
#ifndef T1VoiceDockStatusContentViewDelegate_Protocol_h
#define T1VoiceDockStatusContentViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceDockStatusContentViewDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceDockViewWasTapped:(id)tapped;
- (void)voiceDockViewPlayPauseButtonWasTapped:(id)tapped;
- (void)voiceDockViewCloseButtonWasTapped:(id)tapped;

@optional

@end

#endif /* T1VoiceDockStatusContentViewDelegate_Protocol_h */
