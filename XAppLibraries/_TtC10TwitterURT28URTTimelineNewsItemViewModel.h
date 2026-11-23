//
#ifndef _TtC10TwitterURT28URTTimelineNewsItemViewModel_h
#define _TtC10TwitterURT28URTTimelineNewsItemViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoCMn ?, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV4NewsVMn;

@interface TwitterURT.URTTimelineNewsItemViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.News news;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo ? clientEventInfo;
}

@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC10TwitterURT28URTTimelineNewsItemViewModel_h */
