//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetVideoCompositionExportOperation_h
#define TTMAssetVideoCompositionExportOperation_h
@import Foundation;

@class AVAssetExportSession, NSURL, TFSCameraVideoCompositorComposition, TFSDependentConcurrentOperation, TFSTimer;

@interface TTMAssetVideoCompositionExportOperation : TFSDependentConcurrentOperation

@property (readonly, nonatomic) TFSCameraVideoCompositorComposition *videoCompositorComposition;
@property (readonly, nonatomic) NSURL *exportURL;
@property (readonly, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) id /* block */ completion;
@property (retain, nonatomic) TFSTimer *progressTimer;
@property (retain, nonatomic) AVAssetExportSession *exportSession;

/* instance methods */
- (id)initWithVideoCompositorComposition:(id)composition exportURL:(id)url progressHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)dealloc;
- (void)run;
- (void)_ttm_timer_progressTimerDidFire:(id)fire;
- (void)_ftn_main_callbackProgressHandler;

@end

#endif /* TTMAssetVideoCompositionExportOperation_h */
