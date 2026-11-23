//
#ifndef _TtC10TwitterURT33URTTimelineRelatedSearchViewModel_h
#define _TtC10TwitterURT33URTTimelineRelatedSearchViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV13RelatedSearchVMn;

@interface TwitterURT.URTTimelineRelatedSearchViewModel : NSObject <NSObject, TFSTwitterCore.TFSTwitterScribableItem> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.RelatedSearch relatedSearch;
}

@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) NSString *scribeItemImpressionID;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT33URTTimelineRelatedSearchViewModel_h */
