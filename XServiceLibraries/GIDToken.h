//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDToken_h
#define GIDToken_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSObject, NSString;

@interface GIDToken : NSObject <NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *tokenString;
@property (readonly, nonatomic) NSDate *expirationDate;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithTokenString:(id)string expirationDate:(id)date;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToToken:(id)token;
- (_Bool)isTheSameDate:(id)date with:(id)with;
- (unsigned long long)hash;

@end

#endif /* GIDToken_h */
