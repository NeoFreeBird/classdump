//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
