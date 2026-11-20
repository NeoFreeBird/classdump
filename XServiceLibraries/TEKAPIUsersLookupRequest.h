//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAPIUsersLookupRequest_h
#define TEKAPIUsersLookupRequest_h
@import Foundation;

#include "TEKAPIRequest.h"

@class NSArray;

@interface TEKAPIUsersLookupRequest : TEKAPIRequest

@property (readonly, copy, nonatomic) NSArray *screennames;

/* instance methods */
- (id)initWithScreenNamesToLookUp:(id)up;
- (Class)responseClass;
- (id)endpointPath;
- (id)parameters;

@end

#endif /* TEKAPIUsersLookupRequest_h */
