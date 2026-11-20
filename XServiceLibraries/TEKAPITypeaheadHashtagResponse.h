//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAPITypeaheadHashtagResponse_h
#define TEKAPITypeaheadHashtagResponse_h
@import Foundation;

#include "TEKAPIResponse.h"

@class NSArray;

@interface TEKAPITypeaheadHashtagResponse : TEKAPIResponse {
    /* instance variables */
    NSArray *_hashtags;
}

/* instance methods */
- (void)prepare;
- (id)hashtagStringValues;

@end

#endif /* TEKAPITypeaheadHashtagResponse_h */
