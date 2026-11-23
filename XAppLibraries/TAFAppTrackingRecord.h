//
#ifndef TAFAppTrackingRecord_h
#define TAFAppTrackingRecord_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSObject, NSString;

@interface TAFAppTrackingRecord : NSObject <NSSecureCoding>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long userID;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long authStatus;
@property (nonatomic) long long majorOSVersion;
@property (nonatomic) long long minorOSVersion;
@property (nonatomic) long long patchOSVersion;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (void)saveWithUsername:(id)username userID:(long long)id date:(id)date authStatus:(unsigned long long)status osVersion:(struct { long long x0; long long x1; long long x2; })version;
+ (id)mostRecentRecord;

/* instance methods */
- (id)initWithUsername:(id)username userID:(long long)id date:(id)date authStatus:(unsigned long long)status osVersion:(struct { long long x0; long long x1; long long x2; })version;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)debugDescription;

@end

#endif /* TAFAppTrackingRecord_h */
