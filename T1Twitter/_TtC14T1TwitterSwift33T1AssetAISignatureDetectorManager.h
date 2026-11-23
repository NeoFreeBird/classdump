//
#ifndef _TtC14T1TwitterSwift33T1AssetAISignatureDetectorManager_h
#define _TtC14T1TwitterSwift33T1AssetAISignatureDetectorManager_h
@import Foundation;

#include "T1AISignatureDetectionScribeSink-Protocol.h"

@class NSObject, _$sSaySo26T1AssetAISignatureDetector_pG, _$sSo32T1AISignatureDetectionScribeSink_pSgXw;

@interface T1TwitterSwift.T1AssetAISignatureDetectorManager : NSObject { // (Swift)
    /* instance variables */
    [__C.T1AssetAISignatureDetector] detectors;
}

@property (nonatomic, weak) id <T1AISignatureDetectionScribeSink> composeScribeSink;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (void)runDetectionForAsset:(id)asset account:(id)account completion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift33T1AssetAISignatureDetectorManager_h */
