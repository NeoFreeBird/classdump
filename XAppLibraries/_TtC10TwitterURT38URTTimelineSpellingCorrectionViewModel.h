//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT38URTTimelineSpellingCorrectionViewModel_h
#define _TtC10TwitterURT38URTTimelineSpellingCorrectionViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV8SpellingVMn;

@interface TwitterURT.URTTimelineSpellingCorrectionViewModel : NSObject <NSObject, TFSTwitterCore.TFSTwitterScribableItem> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.Spelling spelling;
}

@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) NSString *scribeItemImpressionID;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT38URTTimelineSpellingCorrectionViewModel_h */
