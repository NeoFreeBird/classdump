//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeThriftLogBase_h
#define TFSScribeThriftLogBase_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeThriftLogBase : NSObject <TBase, NSCoding>

@property (copy, nonatomic) NSString *transactionId;
@property (readonly, nonatomic) _Bool transactionIdIsSet;
@property (copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) _Bool ipAddressIsSet;
@property (nonatomic) long long userId;
@property (readonly, nonatomic) _Bool userIdIsSet;
@property (nonatomic) long long guestId;
@property (readonly, nonatomic) _Bool guestIdIsSet;
@property (nonatomic) long long timestamp;
@property (readonly, nonatomic) _Bool timestampIsSet;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) _Bool userAgentIsSet;
@property (copy, nonatomic) NSString *referer;
@property (readonly, nonatomic) _Bool refererIsSet;
@property (copy, nonatomic) NSString *language;
@property (readonly, nonatomic) _Bool languageIsSet;
@property (copy, nonatomic) NSString *page;
@property (readonly, nonatomic) _Bool pageIsSet;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) _Bool sessionIdIsSet;
@property (nonatomic) long long sessionCreatedAt;
@property (readonly, nonatomic) _Bool sessionCreatedAtIsSet;
@property (nonatomic) long long clientAppId;
@property (readonly, nonatomic) _Bool clientAppIdIsSet;
@property (copy, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) _Bool deviceIdIsSet;
@property (nonatomic) _Bool isSsl;
@property (readonly, nonatomic) _Bool isSslIsSet;
@property (copy, nonatomic) NSString *country;
@property (readonly, nonatomic) _Bool countryIsSet;
@property (copy, nonatomic) NSString *pid;
@property (readonly, nonatomic) _Bool pidIsSet;
@property (nonatomic) _Bool doNotTrack;
@property (readonly, nonatomic) _Bool doNotTrackIsSet;
@property (nonatomic) long long userType;
@property (readonly, nonatomic) _Bool userTypeIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTransactionId:(id)id ipAddress:(id)address userId:(long long)id guestId:(long long)id timestamp:(long long)timestamp userAgent:(id)agent referer:(id)referer language:(id)language page:(id)page sessionId:(id)id sessionCreatedAt:(long long)at clientAppId:(long long)id deviceId:(id)id isSsl:(_Bool)ssl country:(id)country pid:(id)pid doNotTrack:(_Bool)track userType:(long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftLogBase_h */
