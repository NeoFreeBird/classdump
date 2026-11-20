//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor18VideoCaptionResult_h
#define _TtC12XVideoEditor18VideoCaptionResult_h
@import Foundation;

@class XVideoEditor.VideoCaptionsFontLayout ?, _$sSa -> XVideoEditor.VideoCaptionResult.SubResult ?, _$sSa -> XVideoEditor.VideoCaptionResult.Word, _TtCs12_SwiftObject, __C.CMTimeRange;

@interface XVideoEditor.VideoCaptionResult : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> XVideoEditor.VideoCaptionResult.Word words;
    __C.CMTimeRange range;
    XVideoEditor.VideoCaptionsFontLayout ? _lastAppliedFontLayout;
    Swift.Array -> XVideoEditor.VideoCaptionResult.SubResult ? _subResults;
}

@end

#endif /* _TtC12XVideoEditor18VideoCaptionResult_h */
