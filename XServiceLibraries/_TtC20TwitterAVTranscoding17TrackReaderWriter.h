//
#ifndef _TtC20TwitterAVTranscoding17TrackReaderWriter_h
#define _TtC20TwitterAVTranscoding17TrackReaderWriter_h
@import Foundation;

@class TwitterAVTranscoding.CMSampleBufferOutput, _$sSf, _$sSo18AVAssetWriterInputC, _$sSo19AVAssetReaderOutputC, _TtCs12_SwiftObject, __C.CMTime;

@interface TwitterAVTranscoding.TrackReaderWriter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.AVAssetReaderOutput reader;
    __C.AVAssetWriterInput writer;
    TwitterAVTranscoding.CMSampleBufferOutput lastProcessingStage;
    Swift.Float progress;
    __C.CMTime trackEnd;
}

@end

#endif /* _TtC20TwitterAVTranscoding17TrackReaderWriter_h */
