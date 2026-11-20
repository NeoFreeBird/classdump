//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
