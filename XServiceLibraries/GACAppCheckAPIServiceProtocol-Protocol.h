//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppCheckAPIServiceProtocol_Protocol_h
#define GACAppCheckAPIServiceProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol GACAppCheckAPIServiceProtocol <NSObject>

@required

@property (readonly, nonatomic) NSString *baseURL;

/* required instance methods */
- (id)sendRequestWithURL:(id)url HTTPMethod:(id)httpmethod body:(id)body additionalHeaders:(id)headers;
- (id)appCheckTokenWithAPIResponse:(id)apiresponse;

@optional

@end

#endif /* GACAppCheckAPIServiceProtocol_Protocol_h */
