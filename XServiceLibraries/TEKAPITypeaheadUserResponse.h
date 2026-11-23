//
#ifndef TEKAPITypeaheadUserResponse_h
#define TEKAPITypeaheadUserResponse_h
@import Foundation;

#include "TEKAPIResponse.h"

@class NSArray;

@interface TEKAPITypeaheadUserResponse : TEKAPIResponse {
    /* instance variables */
    NSArray *_users;
}

/* instance methods */
- (void)prepare;
- (id)users;

@end

#endif /* TEKAPITypeaheadUserResponse_h */
