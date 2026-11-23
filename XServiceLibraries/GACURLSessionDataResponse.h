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
