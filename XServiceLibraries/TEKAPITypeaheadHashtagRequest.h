//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAPITypeaheadHashtagRequest_h
#define TEKAPITypeaheadHashtagRequest_h
@import Foundation;

#include "TEKAPITypeaheadRequest.h"

@interface TEKAPITypeaheadHashtagRequest : TEKAPITypeaheadRequest

/* instance methods */
- (id)typeaheadType;
- (Class)responseClass;

@end

#endif /* TEKAPITypeaheadHashtagRequest_h */
