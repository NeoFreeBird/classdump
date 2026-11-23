//
#ifndef TEKAPIRequest_h
#define TEKAPIRequest_h
@import Foundation;

#include "TEKMultipartFormData.h"
#include "TNLParameterCollection.h"
#include "TNLRequest-Protocol.h"

@class NSObject, NSString, NSURL;

@interface TEKAPIRequest : NSObject <TNLRequest> {
    /* instance variables */
    NSURL *_URL;
    TNLParameterCollection *_cachedParameters;
    TEKMultipartFormData *_cachedMultipartFormData;
    NSString *_cachedJsonEscapedBody;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (Class)responseClass;
- (id)configuration;
- (id)host;
- (id)endpointPath;
- (id)parameters;
- (id)cachedParameters;
- (id)multipartFormData;
- (id)cachedMultipartFormData;
- (id)jsonEscapedBody;
- (id)cachedJsonEscapedBody;
- (id)HTTPBodyFilePath;
- (id)headers;
- (id)allHTTPHeaderFields;
- (id)URL;
- (id)HTTPBody;

@end

#endif /* TEKAPIRequest_h */
