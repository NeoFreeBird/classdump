//
#ifndef TTMAssetUploadFlowLogger_h
#define TTMAssetUploadFlowLogger_h
@import Foundation;

#include "TFSAssetExportSessionLogger-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSNumber, NSObject, NSString, NSUUID;

@interface TTMAssetUploadFlowLogger : NSObject <TFSAssetExportSessionLogger> {
    /* instance variables */
    NSString *_component;
    NSString *_videoEditorEntry;
    NSString *_videoEditorHasChanges;
    NSNumber *_mediaID;
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
    NSString *_quality;
    NSUUID *_identifierUUID;
    NSUUID *_bundleIdentifierUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *bundleIdentifier;
@property (nonatomic) _Bool videoEditorMediaServicesReset;
@property (copy, nonatomic) NSString *videoEditorLayout;
@property (copy, nonatomic) NSString *assetClassName;

/* instance methods */
- (void)exportSessionStartWithInfoParameters:(id)parameters;
- (void)exportSessionSuccessWithInfoParameters:(id)parameters;
- (void)exportSessionCancelWithInfoParameters:(id)parameters;
- (void)exportSessionFailureWithError:(id)error;
- (id)initWithIdentifier:(id)identifier bundleIdentifier:(id)identifier component:(id)component videoEditorEntry:(long long)entry videoEditorHasChanges:(_Bool)changes scribe:(id)scribe;
- (void)logStartWithSection:(id)section infoParameters:(id)parameters;
- (void)logSuccessWithSection:(id)section infoParameters:(id)parameters;
- (void)logCancelWithSection:(id)section infoParameters:(id)parameters;
- (void)logFailureWithSection:(id)section error:(id)error infoParameters:(id)parameters;
- (void)logStart:(id)start infoParameters:(id)parameters;
- (void)logSuccess:(id)success infoParameters:(id)parameters;
- (void)logCancel:(id)cancel infoParameters:(id)parameters;
- (void)logFailure:(id)failure error:(id)error;
- (void)logFailure:(id)failure error:(id)error infoParameters:(id)parameters;
- (void)_logAction:(id)action section:(id)section message:(id)message infoParameters:(id)parameters;

@end

#endif /* TTMAssetUploadFlowLogger_h */
