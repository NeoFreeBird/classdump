//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMTCFDataGenerator_h
#define APMTCFDataGenerator_h
@import Foundation;

@class NSArray, NSNumber, NSObject, NSString;

@interface APMTCFDataGenerator : NSObject

@property (nonatomic) _Bool isTCFDataEnabled;
@property (retain, nonatomic) NSNumber *isAdvertiserConsentModeEnabled;
@property (retain, nonatomic) NSNumber *cmpSDKID;
@property (retain, nonatomic) NSString *vendorConsents;
@property (retain, nonatomic) NSString *vendorLegitimateInterests;
@property (retain, nonatomic) NSNumber *gdprApplies;
@property (retain, nonatomic) NSNumber *policyVersion;
@property (retain, nonatomic) NSString *purposeConsents;
@property (retain, nonatomic) NSString *purposeLegitimateInterests;
@property (retain, nonatomic) NSArray *publisherRestrictions;
@property (retain, nonatomic) NSNumber *isPurposeOneTreatmentEnabled;
@property (retain, nonatomic) NSString *publisherCC;

/* instance methods */
- (id)generateData;

@end

#endif /* APMTCFDataGenerator_h */
