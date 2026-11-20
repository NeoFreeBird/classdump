//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
