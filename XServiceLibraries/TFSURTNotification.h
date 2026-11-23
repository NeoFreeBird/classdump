//
#ifndef TFSURTNotification_h
#define TFSURTNotification_h
@import Foundation;

@class NSObject;

@interface TFSURTNotification : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 notificationID;
    B24@0:8@"NSString"16 timestampMilliseconds;
    B24@0:8@"NSString"16 targetObjects;
    B24@0:8@"NSString"16 fromUsers;
    B24@0:8@"NSString"16 additionalContext;
    B24@0:8@"NSString"16 richText;
    B24@0:8@"NSString"16 icon;
    B24@0:8@"NSString"16 showAllLinkText;
    B24@0:8@"NSString"16 unifiedCard;
    B24@0:8@"NSString"16 inlineFeedback;
    B24@0:8@"NSString"16 displayOptions;
    B24@0:8@"NSString"16 identifier;
}

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSURTNotification_h */
