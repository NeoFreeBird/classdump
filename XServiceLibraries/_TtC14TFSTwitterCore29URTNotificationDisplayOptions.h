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
