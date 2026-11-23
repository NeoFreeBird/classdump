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
