//
#ifndef T1ExternallyBlockedUserContentEradicationTask_h
#define T1ExternallyBlockedUserContentEradicationTask_h
@import Foundation;

#include "TFNTwitterAccountBlockedContentEradicationMonitoring-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount;

@interface T1ExternallyBlockedUserContentEradicationTask : NSObject <TFNTwitterAccountBlockedContentEradicationMonitoring> {
    /* instance variables */
    TFNTwitterAccount *_account;
    unsigned long long _backgroundTaskIdentifier;
    _Bool _limitToMostRecent;
    _Bool _contentRemoved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account limitToMostRecent:(_Bool)recent;
- (void)dealloc;
- (_Bool)start;
- (void)stop;
- (_Bool)shouldStopRemovingBlockedContentForAccount:(id)account;
- (_Bool)shouldStopRemovingBlockedContentAfterFirstPageForAccount:(id)account;
- (void)didRemoveBlockedContentForAccount:(id)account;
- (void)blockedUserContentDidCompleteForAccount:(id)account error:(id)error;

@end

#endif /* T1ExternallyBlockedUserContentEradicationTask_h */
