//
#ifndef T1StatusPinnedReplyModalAlertManager_h
#define T1StatusPinnedReplyModalAlertManager_h
@import Foundation;

@class NSObject;

@interface T1StatusPinnedReplyModalAlertManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
}

/* class methods */
+ (id)nuxModalHasShownKey;
+ (void)showNUXModalIfNeededFrom:(id)from forAccount:(id)account;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;

@end

#endif /* T1StatusPinnedReplyModalAlertManager_h */
