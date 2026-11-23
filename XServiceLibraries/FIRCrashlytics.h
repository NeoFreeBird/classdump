//
#ifndef FIRCrashlytics_h
#define FIRCrashlytics_h
@import Foundation;

#include "FIRCLSAnalyticsManager.h"
#include "FIRCLSDataCollectionArbiter.h"
#include "FIRCLSExistingReportManager.h"
#include "FIRCLSFileManager.h"
#include "FIRCLSManagerData.h"
#include "FIRCLSRemoteConfigManager.h"
#include "FIRCLSReportManager.h"
#include "FIRCLSReportUploader.h"
#include "FIRCrashlyticsInstanceProvider-Protocol.h"
#include "FIRLibrary-Protocol.h"
#include "FIRRolloutsStateSubscriber-Protocol.h"
#include "FIRSessionsSubscriber-Protocol.h"

@class NSObject, NSString;

@interface FIRCrashlytics : NSObject <FIRLibrary, FIRCrashlyticsInstanceProvider, FIRSessionsSubscriber, FIRRolloutsStateSubscriber>

@property (nonatomic) _Bool didPreviouslyCrash;
@property (copy, nonatomic) NSString *googleAppID;
@property (retain, nonatomic) FIRCLSDataCollectionArbiter *dataArbiter;
@property (retain, nonatomic) FIRCLSFileManager *fileManager;
@property (retain, nonatomic) FIRCLSReportManager *reportManager;
@property (retain, nonatomic) FIRCLSReportUploader *reportUploader;
@property (retain, nonatomic) FIRCLSExistingReportManager *existingReportManager;
@property (retain, nonatomic) FIRCLSAnalyticsManager *analyticsManager;
@property (retain, nonatomic) FIRCLSRemoteConfigManager *remoteConfigManager;
@property (retain, nonatomic) FIRCLSManagerData *managerData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool isDataCollectionEnabled;
@property (readonly, nonatomic) long long sessionsSubscriberName;

/* class methods */
+ (void)load;
+ (id)componentsToRegister;
+ (id)crashlytics;
+ (void)setDevelopmentPlatformName:(id)name;
+ (void)setDevelopmentPlatformVersion:(id)version;

/* instance methods */
- (id)initWithApp:(id)app appInfo:(id)info installations:(id)installations analytics:(id)analytics sessions:(id)sessions remoteConfig:(id)config;
- (void)setCrashlyticsCollectionEnabled:(_Bool)enabled;
- (_Bool)isCrashlyticsCollectionEnabled;
- (_Bool)didCrashDuringPreviousExecution;
- (void)processDidCrashDuringPreviousExecution;
- (void)log:(id)log;
- (void)logWithFormat:(id)format;
- (void)logWithFormat:(id)format arguments:(char *)arguments;
- (void)checkForUnsentReportsWithCompletion:(id /* block */)completion;
- (void)checkAndUpdateUnsentReportsWithCompletion:(id /* block */)completion;
- (void)sendUnsentReports;
- (void)deleteUnsentReports;
- (void)setUserID:(id)id;
- (void)setCustomValue:(id)value forKey:(id)key;
- (void)setCustomKeysAndValues:(id)values;
- (id)developmentPlatformName;
- (void)setDevelopmentPlatformName:(id)name;
- (id)developmentPlatformVersion;
- (void)setDevelopmentPlatformVersion:(id)version;
- (void)recordError:(id)error;
- (void)recordError:(id)error userInfo:(id)info;
- (void)recordExceptionModel:(id)model;
- (void)recordOnDemandExceptionModel:(id)model;
- (void)onSessionChanged:(id)changed;
- (void)rolloutsStateDidChange:(id)change;

@end

#endif /* FIRCrashlytics_h */
