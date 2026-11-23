//
#ifndef TFSTwitterLegacyScribeOptions_Protocol_h
#define TFSTwitterLegacyScribeOptions_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSSet;

@protocol TFSTwitterLegacyScribeOptions <NSObject>

@required

@property (readonly, nonatomic) _Bool perftownEnabled;
@property (readonly, nonatomic) NSSet *perftownEventAllowList;
@property (readonly, nonatomic) NSSet *legacyClientEventDenyList;

/* required instance methods */
- (_Bool)isPerftownEnabled;

@optional

@end

#endif /* TFSTwitterLegacyScribeOptions_Protocol_h */
