//
#ifndef FIRCLSSettings_h
#define FIRCLSSettings_h
@import Foundation;

#include "FIRCLSApplicationIdentifierModel.h"
#include "FIRCLSFileManager.h"

@class NSDictionary, NSObject;

@interface FIRCLSSettings : NSObject

@property (retain, nonatomic) FIRCLSFileManager *fileManager;
@property (retain, nonatomic) FIRCLSApplicationIdentifierModel *appIDModel;
@property (retain, nonatomic) NSDictionary *settingsDictionary;
@property (nonatomic) _Bool isCacheKeyExpired;
@property (readonly, nonatomic) _Bool isCacheExpired;
@property (readonly, nonatomic) unsigned int cacheDurationSeconds;
@property (readonly, nonatomic) _Bool collectReportsEnabled;
@property (readonly, nonatomic) _Bool errorReportingEnabled;
@property (readonly, nonatomic) _Bool customExceptionsEnabled;
@property (readonly, nonatomic) _Bool metricKitCollectionEnabled;
@property (readonly, nonatomic) unsigned int errorLogBufferSize;
@property (readonly, nonatomic) unsigned int logBufferSize;
@property (readonly, nonatomic) unsigned int maxCustomExceptions;
@property (readonly, nonatomic) unsigned int maxCustomKeys;
@property (readonly, nonatomic) double onDemandUploadRate;
@property (readonly, nonatomic) double onDemandBackoffBase;
@property (readonly, nonatomic) unsigned int onDemandBackoffStepDuration;
@property (readonly, nonatomic) _Bool onDemandThreadSuspensionEnabled;

/* instance methods */
- (id)initWithFileManager:(id)manager appIDModel:(id)idmodel;
- (void)reloadFromCacheWithGoogleAppID:(id)id currentTimestamp:(double)timestamp;
- (void)cacheSettingsWithGoogleAppID:(id)id currentTimestamp:(double)timestamp;
- (id)loadCacheKey;
- (void)deleteCachedSettings;
- (id)appSettings;
- (id)sessionSettings;
- (id)featuresSettings;
- (id)fabricSettings;

@end

#endif /* FIRCLSSettings_h */
