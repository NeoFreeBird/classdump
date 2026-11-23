//
#ifndef _TtC10TwitterURT34URTTimelineGenericSummaryViewModel_h
#define _TtC10TwitterURT34URTTimelineGenericSummaryViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV14GenericSummaryVMn, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoCMn ?, _$sSS, _$sSaySo23TFSTwitterCanonicalUser_pG;

@interface TwitterURT.URTTimelineGenericSummaryViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    Swift.String entryID;
    [__C.TFSTwitterCanonicalUser] users;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.GenericSummary summary;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo ? clientEventInfo;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT34URTTimelineGenericSummaryViewModel_h */
