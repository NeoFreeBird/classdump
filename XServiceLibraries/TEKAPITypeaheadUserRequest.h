//
#ifndef TEKAPITypeaheadUserRequest_h
#define TEKAPITypeaheadUserRequest_h
@import Foundation;

#include "TEKAPITypeaheadRequest.h"

@interface TEKAPITypeaheadUserRequest : TEKAPITypeaheadRequest

/* instance methods */
- (id)typeaheadType;
- (Class)responseClass;

@end

#endif /* TEKAPITypeaheadUserRequest_h */
