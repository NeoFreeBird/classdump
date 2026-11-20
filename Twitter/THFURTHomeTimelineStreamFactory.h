//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef THFURTHomeTimelineStreamFactory_h
#define THFURTHomeTimelineStreamFactory_h
@import Foundation;

#include "THMURTHomeTimelineStreamFactoryProtocol-Protocol.h"

@class NSObject, v24@?0@"TTMAssetRenderingResult"8@"NSError"16;

@interface THFURTHomeTimelineStreamFactory : NSObject <THMURTHomeTimelineStreamFactoryProtocol> { // (Swift)
    /* instance variables */
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 applicationLink;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 homeConfiguration;
}

/* instance methods */
- (id)initWithApplicationLink:(id)link homeConfiguration:(id)configuration;
- (id)createWithAccount:(id)account;
- (id)init;

@end

#endif /* THFURTHomeTimelineStreamFactory_h */
