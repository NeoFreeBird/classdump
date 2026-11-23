//
#ifndef FIRCLSSettingsManager_h
#define FIRCLSSettingsManager_h
@import Foundation;

#include "FIRCLSApplicationIdentifierModel.h"
#include "FIRCLSDownloadAndSaveSettingsOperationDelegate-Protocol.h"
#include "FIRCLSFABNetworkClient.h"
#include "FIRCLSFileManager.h"
#include "FIRCLSInstallIdentifierModel.h"
#include "FIRCLSSettings.h"

@class NSDictionary, NSObject, NSString;

@interface FIRCLSSettingsManager : NSObject <FIRCLSDownloadAndSaveSettingsOperationDelegate>

@property (retain, nonatomic) FIRCLSApplicationIdentifierModel *appIDModel;
@property (retain, nonatomic) FIRCLSInstallIdentifierModel *installIDModel;
@property (retain, nonatomic) FIRCLSSettings *settings;
@property (retain, nonatomic) FIRCLSFileManager *fileManager;
@property (retain, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) NSDictionary *defaultConfiguration;
@property (copy, nonatomic) NSString *googleAppID;
@property (copy, nonatomic) NSDictionary *kitVersionsByKitBundleIdentifier;
@property (readonly, nonatomic) FIRCLSFABNetworkClient *networkClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAppIDModel:(id)idmodel installIDModel:(id)idmodel settings:(id)settings fileManager:(id)manager googleAppID:(id)id;
- (void)beginSettingsWithGoogleAppId:(id)id token:(id)token;
- (void)beginSettingsDownload:(id)download;
- (void)finishNetworkingSession;
- (void)operation:(id)operation didDownloadAndSaveSettingsWithError:(id)error;
- (id)settingsURL;

@end

#endif /* FIRCLSSettingsManager_h */
