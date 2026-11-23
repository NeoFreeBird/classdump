//
#ifndef _TtCC16FaceLivenessCore12VideoChunker19AssetWriterDelegate_h
#define _TtCC16FaceLivenessCore12VideoChunker19AssetWriterDelegate_h
@import Foundation;

#include "AVAssetWriterDelegate-Protocol.h"

@class FaceLivenessCore.VideoSegmentProcessor ?, NSObject, _$s10Foundation4DataVMn ?;

@interface FaceLivenessCore.VideoChunker.AssetWriterDelegate : NSObject <AVAssetWriterDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.Data ? initialSegmentData;
    FaceLivenessCore.VideoSegmentProcessor ? segmentProcessor;
}

/* instance methods */
- (void)assetWriter:(id)writer didOutputSegmentData:(id)data segmentType:(long long)type segmentReport:(id)report;
- (id)init;

@end

#endif /* _TtCC16FaceLivenessCore12VideoChunker19AssetWriterDelegate_h */
