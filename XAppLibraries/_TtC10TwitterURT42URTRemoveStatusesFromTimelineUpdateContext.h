//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT42URTRemoveStatusesFromTimelineUpdateContext_h
#define _TtC10TwitterURT42URTRemoveStatusesFromTimelineUpdateContext_h
@import Foundation;

#include "_TtC10TwitterURT24URTTimelineUpdateContext.h"

@class TwitterURT.URTRemoveStatusesFromTimelineUpdateContext.RemoveReason, _$sSh -> _$ss5Int64VMn;

@interface TwitterURT.URTRemoveStatusesFromTimelineUpdateContext : TwitterURT.URTTimelineUpdateContext { // (Swift)
    /* instance variables */
    Swift.Set -> nominal type descriptor for Swift.Int64 statusIDs;
    TwitterURT.URTRemoveStatusesFromTimelineUpdateContext.RemoveReason removeReason;
}

@end

#endif /* _TtC10TwitterURT42URTRemoveStatusesFromTimelineUpdateContext_h */
