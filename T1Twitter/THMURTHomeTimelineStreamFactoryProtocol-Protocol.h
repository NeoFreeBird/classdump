//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef THMURTHomeTimelineStreamFactoryProtocol_Protocol_h
#define THMURTHomeTimelineStreamFactoryProtocol_Protocol_h
@import Foundation;

#include "TFNTwitterHomeTimelineStreamFactory-Protocol.h"

@protocol THMURTHomeTimelineStreamFactoryProtocol <TFNTwitterHomeTimelineStreamFactory>

@required

/* required instance methods */
- (id)initWithApplicationLink:(id)link homeConfiguration:(id)configuration;

@optional

@end

#endif /* THMURTHomeTimelineStreamFactoryProtocol_Protocol_h */
