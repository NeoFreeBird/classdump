//
#ifndef TFSTwitterTwoFactorAuthMethod_h
#define TFSTwitterTwoFactorAuthMethod_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSObject, NSString;

@interface TFSTwitterTwoFactorAuthMethod : NSObject <NSSecureCoding>

@property (readonly, nonatomic) long long methodID;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDate *createdDate;
@property (readonly, copy, nonatomic) NSArray *tags;

/* class methods */
+ (long long)methodTypeStringToType:(id)type;
+ (unsigned long long)methodTagStringToTag:(id)tag;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithMethodID:(long long)id methodType:(long long)type displayName:(id)name methodCreatedDate:(id)date tags:(id)tags;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterTwoFactorAuthMethod_h */
