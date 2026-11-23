//
#ifndef T1DownvoteTooltipManager_h
#define T1DownvoteTooltipManager_h
@import Foundation;

@class NSObject;

@interface T1DownvoteTooltipManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *accountID;
}

/* class methods */
+ (id)shared;
+ (void)t1_resetDownvoteTooltipForAccountID:(id)id;

/* instance methods */
- (id)init;
- (void)configureForAccountID:(id)id;

@end

#endif /* T1DownvoteTooltipManager_h */
