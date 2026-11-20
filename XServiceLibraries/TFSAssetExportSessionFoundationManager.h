//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAssetExportSessionFoundationManager_h
#define TFSAssetExportSessionFoundationManager_h
@import Foundation;

#include "TFSAssetExportSessionManager-Protocol.h"

@class AVAsset, AVAssetExportSession, NSArray, NSNumber, NSObject, NSString, NSURL;

@interface TFSAssetExportSessionFoundationManager : NSObject <TFSAssetExportSessionManager>

@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) double maximumOutputBitrate;
@property (readonly, nonatomic) long long exportMode;
@property (readonly, nonatomic) NSURL *outputURL;
@property (readonly, nonatomic) NSNumber *targetFrameRate;
@property (retain, nonatomic) AVAssetExportSession *session;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly) float progress;
@property (readonly) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)workerQueue;

/* instance methods */
- (id)init;
- (id)initWithAsset:(id)asset maximumOutputBitrate:(double)bitrate exportMode:(long long)mode targetFrameRate:(id)rate outputURL:(id)url metadata:(id)metadata;
- (id)_tfs_presetName;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)handler;
- (void)cancelExport;

@end

#endif /* TFSAssetExportSessionFoundationManager_h */
