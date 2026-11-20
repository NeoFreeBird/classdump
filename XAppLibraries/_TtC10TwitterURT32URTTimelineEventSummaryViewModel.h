//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT32URTTimelineEventSummaryViewModel_h
#define _TtC10TwitterURT32URTTimelineEventSummaryViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString, TwitterURT.URTTimelineEventSummaryViewModel.Media ?, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV10LocalStateVMn, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV12EventSummaryVMn, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoCMn ?, _$s14TFSTwitterCore0A15PromotedContentCMn ?, _$s14TFSTwitterCore18URTFeedbackContextCMn ?, _$sSS, _$sSo23TFSTwitterCanonicalUser_pSg, _$sSo25TFSTwitterPromotableTrend_p;

@interface TwitterURT.URTTimelineEventSummaryViewModel : NSObject <NSObject, TFSTwitterCore.TFSTwitterScribableItem> { // (Swift)
    /* instance variables */
    Swift.String entryID;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo ? clientEventInfo;
    nominal type descriptor for TFSTwitterCore.URTFeedbackContext ? feedbackContext;
    __C.TFSTwitterCanonicalUser? authorUser;
    __C.TFSTwitterCanonicalUser? advertiserUser;
    __C.TFSTwitterPromotableTrend promotableTrend;
    TwitterURT.URTTimelineEventSummaryViewModel.Media ? media;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.EventSummary eventSummary;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.LocalState localState;
    nominal type descriptor for TFSTwitterCore.TFSTwitterPromotedContent ? promotedContent;
}

@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT32URTTimelineEventSummaryViewModel_h */
