//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift28GuideLiveVideoBadgeViewTheme_h
#define _TtC14T1TwitterSwift28GuideLiveVideoBadgeViewTheme_h
@import Foundation;

#include "T1LiveVideoBadgeViewTheme.h"

@class UIColor, UIFont, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV5BadgeVMn;

@interface T1TwitterSwift.GuideLiveVideoBadgeViewTheme : T1LiveVideoBadgeViewTheme { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.Badge badge;
}

@property (nonatomic, readonly) UIColor *badgeTextColor;
@property (nonatomic, readonly) UIColor *badgeTextColorInLiveState;
@property (nonatomic, readonly) UIFont *badgeFont;
@property (nonatomic, readonly) UIFont *badgeFontInLiveState;
@property (nonatomic, readonly) UIColor *badgeBackgroundColor;
@property (nonatomic, readonly) UIColor *badgeBackgroundColorInLiveState;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift28GuideLiveVideoBadgeViewTheme_h */
