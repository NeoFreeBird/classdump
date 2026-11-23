//
#ifndef TFSScribeThriftMobileDetails_h
#define TFSScribeThriftMobileDetails_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeThriftMobileDetails : NSObject <TBase, NSCoding>

@property (copy, nonatomic) NSString *mobileCarrier;
@property (readonly, nonatomic) _Bool mobileCarrierIsSet;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) _Bool orientationIsSet;
@property (nonatomic) int signalStrength;
@property (readonly, nonatomic) _Bool signalStrengthIsSet;
@property (nonatomic) _Bool limitAdTracking;
@property (readonly, nonatomic) _Bool limitAdTrackingIsSet;
@property (copy, nonatomic) NSString *mobileNetworkOperatorCountryCode;
@property (readonly, nonatomic) _Bool mobileNetworkOperatorCountryCodeIsSet;
@property (copy, nonatomic) NSString *mobileNetworkOperatorIsoCountryCode;
@property (readonly, nonatomic) _Bool mobileNetworkOperatorIsoCountryCodeIsSet;
@property (copy, nonatomic) NSString *mobileNetworkOperatorCode;
@property (readonly, nonatomic) _Bool mobileNetworkOperatorCodeIsSet;
@property (copy, nonatomic) NSString *mobileNetworkOperatorName;
@property (readonly, nonatomic) _Bool mobileNetworkOperatorNameIsSet;
@property (copy, nonatomic) NSString *mobileSimProviderIsoCountryCode;
@property (readonly, nonatomic) _Bool mobileSimProviderIsoCountryCodeIsSet;
@property (copy, nonatomic) NSString *mobileSimProviderCode;
@property (readonly, nonatomic) _Bool mobileSimProviderCodeIsSet;
@property (copy, nonatomic) NSString *mobileSimProviderName;
@property (readonly, nonatomic) _Bool mobileSimProviderNameIsSet;
@property (nonatomic) long long radioStatus;
@property (readonly, nonatomic) _Bool radioStatusIsSet;
@property (nonatomic) _Bool isRoaming;
@property (readonly, nonatomic) _Bool isRoamingIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMobileCarrier:(id)carrier orientation:(long long)orientation signalStrength:(int)strength limitAdTracking:(_Bool)tracking mobileNetworkOperatorCountryCode:(id)code mobileNetworkOperatorIsoCountryCode:(id)code mobileNetworkOperatorCode:(id)code mobileNetworkOperatorName:(id)name mobileSimProviderIsoCountryCode:(id)code mobileSimProviderCode:(id)code mobileSimProviderName:(id)name radioStatus:(long long)status isRoaming:(_Bool)roaming;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftMobileDetails_h */
