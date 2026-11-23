//
#ifndef FIRInstallationsURLSessionResponse_h
#define FIRInstallationsURLSessionResponse_h
@import Foundation;

@class NSData, NSHTTPURLResponse, NSObject;

@interface FIRInstallationsURLSessionResponse : NSObject

@property (retain, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (retain, nonatomic) NSData *data;

/* instance methods */
- (id)initWithResponse:(id)response data:(id)data;

@end

#endif /* FIRInstallationsURLSessionResponse_h */
