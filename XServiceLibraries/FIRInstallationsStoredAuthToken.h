//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRInstallationsStoredAuthToken_h
#define FIRInstallationsStoredAuthToken_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSObject, NSString;

@interface FIRInstallationsStoredAuthToken : NSObject <NSSecureCoding, NSCopying>

@property long long status;
@property (copy) NSString *token;
@property (copy) NSDate *expirationDate;
@property (readonly, nonatomic) long long storageVersion;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@end

#endif /* FIRInstallationsStoredAuthToken_h */
