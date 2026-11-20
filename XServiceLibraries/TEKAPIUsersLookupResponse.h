//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
