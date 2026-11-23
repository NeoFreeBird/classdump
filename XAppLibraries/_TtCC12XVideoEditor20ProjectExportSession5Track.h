//
#ifndef _TtCC12XVideoEditor20ProjectExportSession5Track_h
#define _TtCC12XVideoEditor20ProjectExportSession5Track_h
@import Foundation;

@class XVideoEditor.ProjectExportSession.AppendedAudio ?, XVideoEditor.ProjectExportSession.Track.Kind, XVideoEditor.ProjectExportSession.Track.Phase, _$sSdSg, _$sSo18AVAssetWriterInputC, _$sSo19AVAssetReaderOutputC, _TtCs12_SwiftObject;

@interface XVideoEditor.ProjectExportSession.Track : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.ProjectExportSession.Track.Kind kind;
    __C.AVAssetReaderOutput output;
    __C.AVAssetWriterInput input;
    XVideoEditor.ProjectExportSession.Track.Phase phase;
    XVideoEditor.ProjectExportSession.AppendedAudio ? appendedAudio;
    Swift.Double? notReadySince;
}

@end

#endif /* _TtCC12XVideoEditor20ProjectExportSession5Track_h */
