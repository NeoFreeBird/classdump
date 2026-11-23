//
#ifndef FIRInstallationsHTTPError_h
#define FIRInstallationsHTTPError_h
@import Foundation;

@class NSData, NSError, NSHTTPURLResponse;

@interface FIRInstallationsHTTPError : NSError

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (readonly, nonatomic) NSData *data;

/* class methods */
+ (long long)errorCodeWithHTTPCode:(long long)httpcode;
+ (id)userInfoWithHTTPResponse:(id)httpresponse data:(id)data;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* FIRInstallationsHTTPError_h */
