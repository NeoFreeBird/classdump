//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
