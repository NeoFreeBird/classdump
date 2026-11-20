//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetUpload_Protocol_h
#define TTMAssetUpload_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TTMAsset.h"
#include "TTMAssetUploadDelegate-Protocol.h"
#include "TTMAssetUploadFlowLogger.h"

@class NSString, NSUUID;

@protocol TTMAssetUpload <NSObject>

@required

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) TTMAsset *asset;
@property (readonly, nonatomic) unsigned long long status;
@property (weak, nonatomic) id <TTMAssetUploadDelegate> delegate;
@property (readonly, nonatomic) TTMAssetUploadFlowLogger *flowLogger;
@property (readonly, nonatomic) long long uploadPhase;
@property (readonly, nonatomic) long long uploadSource;

@optional

@property (readonly, nonatomic) float progress;

/* optional instance methods */
- (id)initWithAccountID:(id)id scribe:(id)scribe identifier:(id)identifier configuration:(id)configuration asset:(id)asset uploadSource:(long long)source networkQualityProvider:(id)provider networkTransactionMetrics:(id)metrics highQualityImagesSettingsProvider:(id)provider flowLogger:(id)logger authenticateRequestHandler:(id /* block */)handler;
- (_Bool)start;
- (void)cancel;

@end

#endif /* TTMAssetUpload_Protocol_h */
