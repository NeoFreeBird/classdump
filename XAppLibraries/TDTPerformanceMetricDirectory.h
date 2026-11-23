//
#ifndef TDTPerformanceMetricDirectory_h
#define TDTPerformanceMetricDirectory_h
@import Foundation;

@class NSObject, NSString;

@interface TDTPerformanceMetricDirectory : NSObject

@property (readonly, nonatomic) NSString *rootDirectory;
@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSString *appVersionDirectory;
@property (nonatomic) _Bool logNonFatals;

/* class methods */
+ (void)performCleanupForOtherAppVersionsWithRootDirectory:(id)directory appVersion:(id)version;

/* instance methods */
- (id)init;
- (id)initWithRootDirectory:(id)directory appVersion:(id)version;
- (void)performCleanupForRemovedAccountID:(id)id;
- (void)persistSerializedMeasurement:(id)measurement forMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier;
- (id)serializedMeasurementForMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier;
- (void)_logErrorSampled:(id)sampled assert:(_Bool)assert;
- (id)_tfn_filePathForMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier;

@end

#endif /* TDTPerformanceMetricDirectory_h */
