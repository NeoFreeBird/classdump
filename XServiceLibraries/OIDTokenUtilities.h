//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OIDTokenUtilities_h
#define OIDTokenUtilities_h
@import Foundation;

@class NSObject;

@interface OIDTokenUtilities : NSObject

/* class methods */
+ (id)encodeBase64urlNoPadding:(id)padding;
+ (id)randomURLSafeStringWithSize:(unsigned long long)size;
+ (id)sha256:(id)sha256;
+ (id)redact:(id)redact;
+ (id)formUrlEncode:(id)encode;

@end

#endif /* OIDTokenUtilities_h */
