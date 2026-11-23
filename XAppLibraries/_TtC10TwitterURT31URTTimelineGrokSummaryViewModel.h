//
#ifndef _TtC10TwitterURT31URTTimelineGrokSummaryViewModel_h
#define _TtC10TwitterURT31URTTimelineGrokSummaryViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "_TtP4Grok17GrokAuthenticable_-Protocol.h"

@class Grok.GrokSearchSummaryViewModel, NSObject, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV11GrokSummaryVMn, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoCMn ?, _$sSo17TFNTwitterAccountC;

@interface TwitterURT.URTTimelineGrokSummaryViewModel : NSObject <Grok.GrokAuthenticable, NSObject> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.GrokSummary grokSummary;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo ? clientEventInfo;
    Grok.GrokSearchSummaryViewModel searchSummaryViewModel;
    __C.TFNTwitterAccount account;
}

/* instance methods */
- (id)authenticateRequestWithSourceRequest:(id)request parameters:(id)parameters;
- (id)init;

@end

#endif /* _TtC10TwitterURT31URTTimelineGrokSummaryViewModel_h */
