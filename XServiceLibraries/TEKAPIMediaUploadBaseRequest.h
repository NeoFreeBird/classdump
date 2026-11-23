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
