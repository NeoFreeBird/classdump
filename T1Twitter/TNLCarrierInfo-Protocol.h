//
#ifndef TNLCarrierInfo_Protocol_h
#define TNLCarrierInfo_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TNLCarrierInfo <NSObject>

@required

@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, readonly) NSString *mobileCountryCode;
@property (nonatomic, readonly) NSString *mobileNetworkCode;
@property (nonatomic, readonly) NSString *isoCountryCode;
@property (nonatomic, readonly) _Bool allowsVOIP;

@optional

@end

#endif /* TNLCarrierInfo_Protocol_h */
