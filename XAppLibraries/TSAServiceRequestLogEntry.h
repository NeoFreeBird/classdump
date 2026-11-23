//
#ifndef TSAServiceRequestLogEntry_h
#define TSAServiceRequestLogEntry_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSDate, NSObject;

@interface TSAServiceRequestLogEntry : NSObject <NSCoding>

@property (readonly) long long serviceType;
@property (readonly) NSDate *requestDate;
@property (readonly) long long result;
@property (readonly) long long affectedUserID;

/* class methods */
+ (id)_serviceNameForService:(long long)service;
+ (id)_statusNameForResult:(long long)result;

/* instance methods */
- (id)description;
- (id)initWithServiceType:(long long)type requestDate:(id)date result:(long long)result affectedUserID:(long long)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TSAServiceRequestLogEntry_h */
