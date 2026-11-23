//
#ifndef _TtC10XBookmarksP33_DBE87A21C7E422BB20CA3AEB7682A5B541BookmarkFoldersSuccessfulWithActionsToast_h
#define _TtC10XBookmarksP33_DBE87A21C7E422BB20CA3AEB7682A5B541BookmarkFoldersSuccessfulWithActionsToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction;

@interface XBookmarks.(BookmarkFoldersSuccessfulWithActionsToast in _DBE87A21C7E422BB20CA3AEB7682A5B5) : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 saveState;
    @40@0:8:16@24@32 account;
    @40@0:8:16@24@32 status;
    @40@0:8:16@24@32 scribeContext;
    @40@0:8:16@24@32 showAllBookmarks;
    @40@0:8:16@24@32 presentBookmarkFoldersForStatus;
    @40@0:8:16@24@32 duration;
}

@property (nonatomic, readonly) double displayDuration;
@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) TFNToastAction *primaryAction;
@property (nonatomic, readonly) TFNToastAction *alternateAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10XBookmarksP33_DBE87A21C7E422BB20CA3AEB7682A5B541BookmarkFoldersSuccessfulWithActionsToast_h */
