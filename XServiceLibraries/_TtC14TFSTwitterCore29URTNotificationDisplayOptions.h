//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore29URTNotificationDisplayOptions_h
#define _TtC14TFSTwitterCore29URTNotificationDisplayOptions_h
@import Foundation;

@class NSObject, TFSTwitterCore.URTNotificationInlineActions ?, TFSTwitterCore.URTNotificationMediaPreview ?, TFSTwitterCore.URTNotificationQuoteTweet ?;

@interface TFSTwitterCore.URTNotificationDisplayOptions : NSObject { // (Swift)
    /* instance variables */
    TFSTwitterCore.URTNotificationInlineActions ? inlineActions;
    TFSTwitterCore.URTNotificationMediaPreview ? mediaPreview;
    TFSTwitterCore.URTNotificationQuoteTweet ? quoteTweet;
}

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore29URTNotificationDisplayOptions_h */
