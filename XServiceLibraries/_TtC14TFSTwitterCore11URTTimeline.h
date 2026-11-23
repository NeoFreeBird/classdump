//
#ifndef _TtC14TFSTwitterCore11URTTimeline_h
#define _TtC14TFSTwitterCore11URTTimeline_h
@import Foundation;

@class Swift.Bool, TFSTwitterCore.URTTimeline.EncodingPolicy ?, TFSTwitterCore.URTTimeline.TerminationDirection, TFSTwitterCore.URTTimelineClientMetadata ?, TFSURTCore.Memoizer _$sySh -> TFSURTCore.URTAnatomy.ReferencedAnatomy, TFSURTCore.URTTimelineCursor ?, TFSURTCore.URTTimelineMetadata ?, _$sSDySS TFSTwitterCore.URTTimeline.EntryOrInjection, _$sSS, _$sSa -> TFSTwitterCore.URTTimeline.EntryOrInjection, _$sSa -> TFSTwitterCore.URTTimeline.Navigation, _$sSa -> TFSTwitterCore.URTTimeline.UpdateDisplayAction, _$sSa -> TFSTwitterCore.URTTimelineClientFeedbackConfirmation, _TtCs12_SwiftObject;

@interface TFSTwitterCore.URTTimeline : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String urtTimelineUID;
    Swift.Array -> TFSTwitterCore.URTTimeline.EntryOrInjection sortedEntries;
    Swift.Bool hasHomeConversationEntries;
    Swift.Dictionary empty-list Swift.String TFSTwitterCore.URTTimeline.EntryOrInjection entriesByEntryID;
    TFSURTCore.URTTimelineCursor ? topCursor;
    TFSURTCore.URTTimelineCursor ? bottomCursor;
    Swift.Array -> TFSTwitterCore.URTTimeline.UpdateDisplayAction updateDisplayActions;
    Swift.Array -> TFSTwitterCore.URTTimeline.Navigation navigationInstructions;
    TFSURTCore.URTTimelineMetadata ? metadata;
    TFSTwitterCore.URTTimelineClientMetadata ? clientMetadata;
    Swift.Array -> TFSTwitterCore.URTTimelineClientFeedbackConfirmation clientFeedbackConfirmations;
    TFSTwitterCore.URTTimeline.EncodingPolicy ? encodingPolicy;
    Swift.Bool deserialized;
    TFSTwitterCore.URTTimeline.TerminationDirection termination;
    TFSURTCore.Memoizer  empty-list Swift.Set -> TFSURTCore.URTAnatomy.ReferencedAnatomy anatomyReferenceMemoizer;
}

@end

#endif /* _TtC14TFSTwitterCore11URTTimeline_h */
