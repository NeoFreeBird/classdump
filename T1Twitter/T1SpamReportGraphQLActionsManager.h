//
#ifndef T1SpamReportGraphQLActionsManager_h
#define T1SpamReportGraphQLActionsManager_h
@import Foundation;

@class NSObject;

@interface T1SpamReportGraphQLActionsManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *accountID;
    NSNumber"16@0:8 *$__lazy_storage_$_actionService;
}

/* instance methods */
- (id)initWithAccountID:(id)id;
- (void)reportSpamWithStatusID:(long long)id completion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1SpamReportGraphQLActionsManager_h */
