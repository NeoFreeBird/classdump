//
#ifndef TFSTwitterAPIFriendshipsAcceptAction_h
#define TFSTwitterAPIFriendshipsAcceptAction_h
@import Foundation;

@class NSObject;

@interface TFSTwitterAPIFriendshipsAcceptAction : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 commandLoader;
    B24@0:8@"NSString"16 modelContext;
    B24@0:8@"NSString"16 accountID;
    B24@0:8@"NSString"16 commandContext;
    B24@0:8@"NSString"16 accountUserID;
    B24@0:8@"NSString"16 userID;
    B24@0:8@"NSString"16 screenName;
}

/* instance methods */
- (id)initWithAccountID:(id)id commandLoader:(id)loader commandContext:(id)context modelContext:(id)context accountUserID:(long long)id userID:(id)id screenName:(id)name;
- (void)performActionWithCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* TFSTwitterAPIFriendshipsAcceptAction_h */
