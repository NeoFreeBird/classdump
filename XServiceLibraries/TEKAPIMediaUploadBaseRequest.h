//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAPIMediaUploadBaseRequest_h
#define TEKAPIMediaUploadBaseRequest_h
@import Foundation;

#include "TEKAPIRequest.h"

@interface TEKAPIMediaUploadBaseRequest : TEKAPIRequest

/* instance methods */
- (id)host;
- (id)endpointPath;
- (long long)HTTPMethodValue;

@end

#endif /* TEKAPIMediaUploadBaseRequest_h */
