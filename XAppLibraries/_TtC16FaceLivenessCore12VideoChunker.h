//
#ifndef _TtC16FaceLivenessCore12VideoChunker_h
#define _TtC16FaceLivenessCore12VideoChunker_h
@import Foundation;

@class FaceLivenessCore.VideoChunker.AssetWriterDelegate, FaceLivenessCore.VideoChunker.State, _$sSdSg, _$sSo13AVAssetWriterC, _$sSo18AVAssetWriterInputC, _$sSo36AVAssetWriterInputPixelBufferAdaptorC, _$sySo7UIImageCcSg, _TtCs12_SwiftObject;

@interface FaceLivenessCore.VideoChunker : Swift._SwiftObject { // (Swift)
    /* instance variables */
    FaceLivenessCore.VideoChunker.State state;
    __C.AVAssetWriter assetWriter;
    FaceLivenessCore.VideoChunker.AssetWriterDelegate assetWriterDelegate;
    __C.AVAssetWriterInput assetWriterInput;
    __C.AVAssetWriterInputPixelBufferAdaptor pixelBufferAdaptor;
    Swift.Double? startTimeSeconds;
    ((__C.UIImage) -> ())? provideSingleFrame;
}

@end

#endif /* _TtC16FaceLivenessCore12VideoChunker_h */
