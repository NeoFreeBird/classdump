//
#ifndef APMIdentitySupport_Protocol_h
#define APMIdentitySupport_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol APMIdentitySupport <NSObject>

@required

@property (readonly, nonatomic) _Bool hasAppDataConsentStatus;
@property (readonly, nonatomic) unsigned long long appDataConsentStatus;
@property (readonly, nonatomic) _Bool hasLimitedAdTracking;
@property (readonly, nonatomic) _Bool limitedAdTracking;
@property (readonly, nonatomic) NSString *resettableDeviceID;

@optional

@end

#endif /* APMIdentitySupport_Protocol_h */
