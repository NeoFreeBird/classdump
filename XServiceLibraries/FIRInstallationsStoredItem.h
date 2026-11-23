//
#ifndef FIRInstallationsStoredItem_h
#define FIRInstallationsStoredItem_h
@import Foundation;

#include "FIRInstallationsStoredAuthToken.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface FIRInstallationsStoredItem : NSObject <NSSecureCoding>

@property (copy, nonatomic) NSString *firebaseInstallationID;
@property (copy, nonatomic) NSString *refreshToken;
@property (retain, nonatomic) FIRInstallationsStoredAuthToken *authToken;
@property (nonatomic) long long registrationStatus;
@property (retain, nonatomic) NSString *IIDDefaultToken;
@property (readonly, nonatomic) long long storageVersion;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@end

#endif /* FIRInstallationsStoredItem_h */
