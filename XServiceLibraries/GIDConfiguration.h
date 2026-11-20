//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDConfiguration_h
#define GIDConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface GIDConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *serverClientID;
@property (readonly, nonatomic) NSString *hostedDomain;
@property (readonly, nonatomic) NSString *openIDRealm;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithClientID:(id)id;
- (id)initWithClientID:(id)id serverClientID:(id)id;
- (id)initWithClientID:(id)id serverClientID:(id)id hostedDomain:(id)domain openIDRealm:(id)idrealm;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* GIDConfiguration_h */
