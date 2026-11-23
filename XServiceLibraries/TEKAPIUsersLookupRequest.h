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
