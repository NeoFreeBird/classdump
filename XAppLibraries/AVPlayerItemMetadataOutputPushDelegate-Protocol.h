//
#ifndef AVPlayerItemMetadataOutputPushDelegate_Protocol_h
#define AVPlayerItemMetadataOutputPushDelegate_Protocol_h
@import Foundation;

#include "AVPlayerItemOutputPushDelegate-Protocol.h"

@protocol AVPlayerItemMetadataOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@required

@optional

/* optional instance methods */
- (void)metadataOutput:(id)output didOutputTimedMetadataGroups:(id)groups fromPlayerItemTrack:(id)track;

@end

#endif /* AVPlayerItemMetadataOutputPushDelegate_Protocol_h */
