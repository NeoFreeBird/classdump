//
#ifndef _TtC20TwitterAVTranscoding18TranscodingSession_h
#define _TtC20TwitterAVTranscoding18TranscodingSession_h
@import Foundation;

@class Swift.Bool, _$sSa -> TwitterAVTranscoding.TrackReaderWriter, _$sSi, _$sSo13AVAssetReaderC, _$sSo13AVAssetWriterC, _$ss6ResultOMn _$syyt -> _$ss5ErrorMp _$sGcSg, _$sySfcSg, _TtCs12_SwiftObject;

@interface TwitterAVTranscoding.TranscodingSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.AVAssetReader assetReader;
    __C.AVAssetWriter assetWriter;
    Swift.Array -> TwitterAVTranscoding.TrackReaderWriter trackReaderWriters;
    nominal type descriptor for Swift.Result  empty-list () -> protocol descriptor for Swift.Error _$sGcSg userProvidedCompletion;
    ((Swift.Float) -> ())? progressUpdateBlock;
    Swift.Int remainingTracks;
    Swift.Bool finished;
    Swift.Bool cancelled;
}

@end

#endif /* _TtC20TwitterAVTranscoding18TranscodingSession_h */
