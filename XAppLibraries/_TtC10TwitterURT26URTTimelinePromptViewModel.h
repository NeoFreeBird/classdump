//
#ifndef _TtC10TwitterURT26URTTimelinePromptViewModel_h
#define _TtC10TwitterURT26URTTimelinePromptViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString, TwitterURT.HydratedPrompt, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoCMn ?, _$sSDySSypGSg, _$sSS;

@interface TwitterURT.URTTimelinePromptViewModel : NSObject <TFSTwitterCore.TFSTwitterScribableItem, NSObject> { // (Swift)
    /* instance variables */
    Swift.String entryID;
    TwitterURT.HydratedPrompt prompt;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo ? clientEventInfo;
    [Swift.String : Any]? storedScribeItem;
}

@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC10TwitterURT26URTTimelinePromptViewModel_h */
