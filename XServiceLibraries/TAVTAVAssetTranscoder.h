//
#ifndef TAVTAVAssetTranscoder_h
#define TAVTAVAssetTranscoder_h
@import Foundation;

@class NSObject;

@interface TAVTAVAssetTranscoder : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 cancelled;
    B24@0:8@"NSString"16 context;
    B24@0:8@"NSString"16 session;
}

/* instance methods */
- (id)initWithContext:(id)context;
- (void)transcodeWithAsset:(id)asset completion:(id /* block */)completion;
- (void)cancel;
- (id)init;

@end

#endif /* TAVTAVAssetTranscoder_h */
