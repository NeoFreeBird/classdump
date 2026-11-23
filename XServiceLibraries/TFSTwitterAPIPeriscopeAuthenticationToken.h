//
#ifndef TFSTwitterAPIPeriscopeAuthenticationToken_h
#define TFSTwitterAPIPeriscopeAuthenticationToken_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterAPIPeriscopeAuthenticationToken : NSObject

@property (readonly, copy, nonatomic) NSString *JWT;

/* instance methods */
- (id)initWithJWT:(id)jwt;

@end

#endif /* TFSTwitterAPIPeriscopeAuthenticationToken_h */
