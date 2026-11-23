//
#ifndef APMAudienceFilter_Protocol_h
#define APMAudienceFilter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol APMAudienceFilter <NSObject>

@required

@property (readonly, nonatomic) int audienceID;
@property (readonly, nonatomic) int filterID;
@property (readonly, nonatomic) _Bool sessionScoped;
@property (readonly, nonatomic) _Bool dynamic;
@property (readonly, nonatomic) _Bool sequence;

/* required instance methods */
- (_Bool)isSessionScoped;
- (_Bool)isDynamic;
- (_Bool)isSequence;

@optional

@end

#endif /* APMAudienceFilter_Protocol_h */
