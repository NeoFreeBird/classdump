//
#ifndef GACAppCheckHTTPError_h
#define GACAppCheckHTTPError_h
@import Foundation;

@class NSData, NSError, NSHTTPURLResponse;

@interface GACAppCheckHTTPError : NSError

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (readonly, nonatomic) NSData *data;

/* class methods */
+ (id)userInfoWithHTTPResponse:(id)httpresponse data:(id)data;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* GACAppCheckHTTPError_h */
