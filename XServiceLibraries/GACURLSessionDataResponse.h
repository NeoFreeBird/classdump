//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACURLSessionDataResponse_h
#define GACURLSessionDataResponse_h
@import Foundation;

@class NSData, NSHTTPURLResponse, NSObject;

@interface GACURLSessionDataResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (readonly, nonatomic) NSData *HTTPBody;

/* instance methods */
- (id)initWithResponse:(id)response HTTPBody:(id)httpbody;

@end

#endif /* GACURLSessionDataResponse_h */
