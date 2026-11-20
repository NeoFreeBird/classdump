//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9URTModels33URTTimelineEntryIntegrityAnalyzer_h
#define _TtC9URTModels33URTTimelineEntryIntegrityAnalyzer_h
@import Foundation;

@class Swift.Bool, _$s10TFSURTCore17URTTimelineCursorVMn ?, _$s14TFSTwitterCore11URTTimelineCMn ?, _$s8TFSModel20TypedModelIdentifierCMn _$s14TFSTwitterCore11URTTimelineCMn, _$sSS, _$sSa -> _$s10TFSURTCore22URTTimelineInstructionOMn, _$syyc, _TtCs12_SwiftObject;

@interface URTModels.URTTimelineEntryIntegrityAnalyzer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSModel.TypedModelIdentifier nominal type descriptor for TFSTwitterCore.URTTimeline identifier;
    Swift.String urtTimelineUID;
    Swift.Array -> nominal type descriptor for TFSURTCore.URTTimelineInstruction instructions;
    nominal type descriptor for TFSURTCore.URTTimelineCursor ? requestedCursor;
    Swift.Bool assertOnFailure;
    () -> () assertImplementation;
    nominal type descriptor for TFSTwitterCore.URTTimeline ? initialTimelineState;
}

@end

#endif /* _TtC9URTModels33URTTimelineEntryIntegrityAnalyzer_h */
