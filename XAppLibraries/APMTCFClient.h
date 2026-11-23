//
#ifndef APMTCFClient_h
#define APMTCFClient_h
@import Foundation;

#include "APMTCFData.h"
#include "APMUserDefaults.h"

@class NSObject;

@interface APMTCFClient : NSObject {
    /* instance variables */
    APMUserDefaults *_userDefaults;
}

@property (readonly, nonatomic) APMTCFData *tcfData;
@property (nonatomic) _Bool isDMARegion;

/* instance methods */
- (id)init;
- (void)readTCFData;
- (_Bool)shouldApplyTCFData;
- (_Bool)shouldApplyOneTimeTCFVendorFix;
- (void)setConsentFromTCFData;
- (void)logTCFChangedEventShouldApplyOneTimeVendorFix:(_Bool)fix isCurrentSameAsPreviousTCFConsent:(_Bool)tcfconsent;
- (void)storeCurrentData;
- (id)stringRepresentationFromTCFData;
- (id)consentStatusFromEnabled:(_Bool)enabled;
- (_Bool)persistedValuesEqualCurrentData;
- (_Bool)hasTCFDataToRead;
- (void)clearPersistedValues;
- (id)previousConsent;
- (id)tcfBundleParameterValue;
- (id)tcfdMigrationParamValueForMigrationDidOccur:(_Bool)occur didMigrationChangeConsent:(_Bool)consent;
- (id)tcfd2ParamValue;
- (int)tcfd2ParamValueForPurposeID:(long long)id;

@end

#endif /* APMTCFClient_h */
