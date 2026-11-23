//
#ifndef TEKAPIUsersLookupResponse_h
#define TEKAPIUsersLookupResponse_h
@import Foundation;

#include "TEKAPIResponse.h"

@class NSArray;

@interface TEKAPIUsersLookupResponse : TEKAPIResponse

@property (readonly, copy, nonatomic) NSArray *users;

/* instance methods */
- (void)prepare;
- (_Bool)shouldTreatStatusCodeAsHTTPError;

@end

#endif /* TEKAPIUsersLookupResponse_h */
