//
#ifndef GACAppCheckCryptoUtils_h
#define GACAppCheckCryptoUtils_h
@import Foundation;

@class NSObject;

@interface GACAppCheckCryptoUtils : NSObject

/* class methods */
+ (id)sha256HashFromData:(id)data;

@end

#endif /* GACAppCheckCryptoUtils_h */
