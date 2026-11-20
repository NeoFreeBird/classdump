//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP10TwitterURT25TFNTwitterTimelineScriber__Protocol_h
#define _TtP10TwitterURT25TFNTwitterTimelineScriber__Protocol_h
@import Foundation;

#include "_TtP10TwitterURT39TFNTwitterTimelineItemsHydrationScriber_-Protocol.h"

@protocol TwitterURT.TFNTwitterTimelineScriber <TwitterURT.TFNTwitterTimelineItemsHydrationScriber>

@required

/* required instance methods */
- (void)timelineDeserializationDidFail;
- (void)timelineRapidReloadDidOccur;

@optional

@end

#endif /* _TtP10TwitterURT25TFNTwitterTimelineScriber__Protocol_h */
