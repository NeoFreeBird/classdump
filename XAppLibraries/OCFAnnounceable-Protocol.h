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
