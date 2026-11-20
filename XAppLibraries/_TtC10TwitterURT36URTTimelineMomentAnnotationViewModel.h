//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT36URTTimelineMomentAnnotationViewModel_h
#define _TtC10TwitterURT36URTTimelineMomentAnnotationViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString, _$s10TFSURTCore11URTRichTextCMn ?, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoCMn ?, _$ss5Int64VMn;

@interface TwitterURT.URTTimelineMomentAnnotationViewModel : NSObject <TFSTwitterCore.TFSTwitterScribableItem, NSObject> { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 annotationID;
    nominal type descriptor for TFSURTCore.URTRichText ? text;
    nominal type descriptor for TFSURTCore.URTRichText ? header;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo ? clientEventInfo;
}

@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT36URTTimelineMomentAnnotationViewModel_h */
