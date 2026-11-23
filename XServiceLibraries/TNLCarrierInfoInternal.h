//
#ifndef TNLCarrierInfoInternal_h
#define TNLCarrierInfoInternal_h
@import Foundation;

#include "TNLCarrierInfo-Protocol.h"

@class NSObject, NSString;

@interface TNLCarrierInfoInternal : NSObject <TNLCarrierInfo>

@property (readonly, copy, nonatomic) NSString *carrierName;
@property (readonly, copy, nonatomic) NSString *mobileCountryCode;
@property (readonly, copy, nonatomic) NSString *mobileNetworkCode;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (readonly, nonatomic) _Bool allowsVOIP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCarrier:(id)carrier;

@end

#endif /* TNLCarrierInfoInternal_h */
