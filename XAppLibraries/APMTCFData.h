//
#ifndef APMTCFData_h
#define APMTCFData_h
@import Foundation;

#include "APMUserDefaults.h"

@class NSArray, NSNumber, NSObject, NSString;

@interface APMTCFData : NSObject {
    /* instance variables */
    APMUserDefaults *_userDefaults;
}

@property (readonly, nonatomic) _Bool isTCFDataEnabled;
@property (readonly, nonatomic) NSNumber *isAdvertiserConsentModeEnabled;
@property (readonly, nonatomic) NSNumber *cmpSDKID;
@property (readonly, nonatomic) NSString *vendorConsents;
@property (readonly, nonatomic) NSString *vendorLegitimateInterests;
@property (readonly, nonatomic) NSNumber *gdprApplies;
@property (readonly, nonatomic) NSNumber *policyVersion;
@property (readonly, nonatomic) NSString *purposeConsents;
@property (readonly, nonatomic) NSString *purposeLegitimateInterests;
@property (readonly, nonatomic) NSArray *publisherRestrictions;
@property (readonly, nonatomic) NSNumber *isPurposeOneTreatmentEnabled;
@property (readonly, nonatomic) NSString *publisherCC;

/* instance methods */
- (id)init;
- (id)initWithIsTCFDataEnabled:(_Bool)enabled isAdvertiserConsentModeEnabled:(id)enabled vendorConsents:(id)consents vendorLegitimateInterests:(id)interests cmpSDKID:(id)sdkid gdprApplies:(id)applies policyVersion:(id)version purposeConsents:(id)consents purposeLegitimateInterests:(id)interests publisherRestrictions:(id)restrictions isPurposeOneTreatmentEnabled:(id)enabled publisherCC:(id)cc;
- (void)readTCFDataEnabledStateFromPlist;
- (void)readFromUserDefaults;
- (_Bool)hasGoogleInVendorConsents;
- (_Bool)hasGoogleInVendorLegitimateInterests;
- (_Bool)canAccessAdUserDataPurpose;
- (_Bool)isAdStoragePurposeGranted;
- (_Bool)isAdPersonalizationPurposeGranted;
- (_Bool)isAdUserDataPurposeGranted;
- (_Bool)isPurposeGrantedWithRestrictionCheckForPurposeID:(long long)id;
- (long long)consentReasonForPurposeGrantedWithRestrictionCheckForPurposeID:(long long)id;
- (long long)legalBasisCheckFromPurposeID:(long long)id;
- (long long)publisherRestrictionForPurposeID:(long long)id;
- (long long)publisherRestrictionTypeFromString:(id)string;
- (_Bool)isPurposeOneGrantedWithSpecialTreatment;

@end

#endif /* APMTCFData_h */
