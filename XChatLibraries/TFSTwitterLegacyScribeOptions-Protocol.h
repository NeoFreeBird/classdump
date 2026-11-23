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
