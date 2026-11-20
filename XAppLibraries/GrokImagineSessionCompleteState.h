//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GrokImagineSessionCompleteState_h
#define GrokImagineSessionCompleteState_h
@import Foundation;

#include "GrokImagineSessionCompleteReasonUpsell.h"

@class NSData, NSObject, NSString, NSURL;

@interface GrokImagineSessionCompleteState : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 videoDownloader;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) NSData *audioData;
@property (nonatomic, readonly) GrokImagineSessionCompleteReasonUpsell *upsell;
@property (nonatomic, readonly) _Bool moderated;
@property (nonatomic, readonly) NSString *errorMessage;

/* instance methods */
- (id)makeVideoAssetWithSourceAsset:(id)asset;
- (id)init;

@end

#endif /* GrokImagineSessionCompleteState_h */
