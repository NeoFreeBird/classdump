//
#ifndef FIRCLSDownloadAndSaveSettingsOperation_h
#define FIRCLSDownloadAndSaveSettingsOperation_h
@import Foundation;

#include "FIRCLSDownloadAndSaveSettingsOperationDelegate-Protocol.h"
#include "FIRCLSFABNetworkClient.h"
#include "FIRCLSInstallIdentifierModel.h"
#include "FIRCLSNetworkOperation.h"

@class NSError, NSFileManager, NSString, NSURL;

@interface FIRCLSDownloadAndSaveSettingsOperation : FIRCLSNetworkOperation

@property (readonly, nonatomic) NSURL *settingsURL;
@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *settingsDirectoryPath;
@property (readonly, nonatomic) NSString *settingsFilePath;
@property (readonly, nonatomic) FIRCLSInstallIdentifierModel *installIDModel;
@property (readonly, weak, nonatomic) FIRCLSFABNetworkClient *networkClient;
@property (readonly, weak, nonatomic) id <FIRCLSDownloadAndSaveSettingsOperationDelegate> delegate;
@property (readonly, nonatomic) NSError *error;

/* instance methods */
- (id)initWithGoogleAppID:(id)id delegate:(id)delegate settingsURL:(id)url settingsDirectoryPath:(id)path settingsFilePath:(id)path installIDModel:(id)idmodel networkClient:(id)client token:(id)token;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)url;
- (void)main;

@end

#endif /* FIRCLSDownloadAndSaveSettingsOperation_h */
