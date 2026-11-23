//
#ifndef URTTimelineUserItemViewModel_h
#define URTTimelineUserItemViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, NSString;

@interface URTTimelineUserItemViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 userItem;
    @40@0:8:16@24@32 clientEventInfo;
    @40@0:8:16@24@32 advertiserUser;
    @40@0:8:16@24@32 entryID;
    @40@0:8:16@24@32 sortIndex;
    @40@0:8:16@24@32 $__lazy_storage_$_unifiedID;
    @40@0:8:16@24@32 user;
    @40@0:8:16@24@32 $__lazy_storage_$_bioDisplayTextResult;
}

@property (nonatomic, readonly) long long timelineModuleItemIndex;
@property (nonatomic, copy) NSString *unifiedID;
@property (nonatomic, readonly) NSString *scribeComponent;

/* instance methods */
- (void)userUpdated:(id)updated;
- (void)dealloc;
- (id)init;

@end

#endif /* URTTimelineUserItemViewModel_h */
