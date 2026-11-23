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
