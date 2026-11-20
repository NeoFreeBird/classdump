//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XBookmarksP33_DBE87A21C7E422BB20CA3AEB7682A5B525BookmarkFoldersErrorToast_h
#define _TtC10XBookmarksP33_DBE87A21C7E422BB20CA3AEB7682A5B525BookmarkFoldersErrorToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, UIColor;

@interface XBookmarks.(BookmarkFoldersErrorToast in _DBE87A21C7E422BB20CA3AEB7682A5B5) : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 message;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) UIColor *iconColor;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10XBookmarksP33_DBE87A21C7E422BB20CA3AEB7682A5B525BookmarkFoldersErrorToast_h */
