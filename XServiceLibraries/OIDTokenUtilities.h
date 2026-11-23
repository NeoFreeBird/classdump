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
