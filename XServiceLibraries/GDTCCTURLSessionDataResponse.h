//
#ifndef GDTCCTURLSessionDataResponse_h
#define GDTCCTURLSessionDataResponse_h
@import Foundation;

@class NSData, NSHTTPURLResponse, NSObject;

@interface GDTCCTURLSessionDataResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (readonly, nonatomic) NSData *HTTPBody;

/* instance methods */
- (id)initWithResponse:(id)response HTTPBody:(id)httpbody;

@end

#endif /* GDTCCTURLSessionDataResponse_h */
