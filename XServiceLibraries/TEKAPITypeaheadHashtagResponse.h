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
