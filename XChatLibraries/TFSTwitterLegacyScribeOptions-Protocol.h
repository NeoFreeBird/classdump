//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLegacyScribeOptions_Protocol_h
#define TFSTwitterLegacyScribeOptions_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSSet;

@protocol TFSTwitterLegacyScribeOptions <NSObject>

@required

@property (nonatomic, readonly) _Bool perftownEnabled;
@property (nonatomic, readonly) _Bool perftownEnabled;
@property (nonatomic, readonly) NSSet *perftownEventAllowList;
@property (nonatomic, readonly) NSSet *legacyClientEventDenyList;

/* required instance methods */
- (_Bool)isPerftownEnabled;
- (_Bool)isPerftownEnabled;

@optional

@end

#endif /* TFSTwitterLegacyScribeOptions_Protocol_h */
