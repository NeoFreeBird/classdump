//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFAnnounceable_Protocol_h
#define OCFAnnounceable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFAnnounceable <NSObject>

@required

/* required instance methods */
- (id)ocf_voiceoverPresentationAnnouncement;

@optional

@end

#endif /* OCFAnnounceable_Protocol_h */
