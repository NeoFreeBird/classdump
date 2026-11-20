//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAPICardPreviewRequest_h
#define TEKAPICardPreviewRequest_h
@import Foundation;

#include "TEKAPIRequest.h"

@class NSString;

@interface TEKAPICardPreviewRequest : TEKAPIRequest

@property (readonly, copy, nonatomic) NSString *cardURLString;

/* instance methods */
- (id)initWithCardURLString:(id)urlstring;
- (id)host;
- (id)endpointPath;
- (long long)HTTPMethodValue;
- (id)parameters;
- (id)headers;
- (Class)responseClass;

@end

#endif /* TEKAPICardPreviewRequest_h */
