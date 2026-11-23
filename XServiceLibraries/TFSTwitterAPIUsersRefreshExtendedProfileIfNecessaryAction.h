//
#ifndef TFSTwitterAPIUsersRefreshExtendedProfileIfNecessaryAction_h
#define TFSTwitterAPIUsersRefreshExtendedProfileIfNecessaryAction_h
@import Foundation;

@class NSObject;

@interface TFSTwitterAPIUsersRefreshExtendedProfileIfNecessaryAction : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 commandLoader;
    B24@0:8@"NSString"16 commandContext;
    B24@0:8@"NSString"16 modelContext;
    B24@0:8@"NSString"16 accountID;
    B24@0:8@"NSString"16 screenName;
    B24@0:8@"NSString"16 userID;
    B24@0:8@"NSString"16 forced;
    B24@0:8@"NSString"16 completionBlock;
}

/* instance methods */
- (id)initWithCommandLoader:(id)loader commandContext:(id)context modelContext:(id)context accountID:(id)id screenName:(id)name userID:(long long)id forced:(_Bool)forced completionBlock:(id /* block */)block;
- (void)performAction;
- (id)init;

@end

#endif /* TFSTwitterAPIUsersRefreshExtendedProfileIfNecessaryAction_h */
