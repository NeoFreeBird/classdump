//
#ifndef TNLCarrierInfo_Protocol_h
#define TNLCarrierInfo_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TNLCarrierInfo <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *carrierName;
@property (readonly, copy, nonatomic) NSString *mobileCountryCode;
@property (readonly, copy, nonatomic) NSString *mobileNetworkCode;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (readonly, nonatomic) _Bool allowsVOIP;

@optional

@end

#endif /* TNLCarrierInfo_Protocol_h */
