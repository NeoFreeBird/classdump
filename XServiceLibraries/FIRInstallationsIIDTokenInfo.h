//
#ifndef FIRInstallationsIIDTokenInfo_h
#define FIRInstallationsIIDTokenInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface FIRInstallationsIIDTokenInfo : NSObject <NSSecureCoding>

@property (copy, nonatomic) NSString *token;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@end

#endif /* FIRInstallationsIIDTokenInfo_h */
