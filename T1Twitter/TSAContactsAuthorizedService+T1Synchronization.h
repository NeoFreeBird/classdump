//
#ifndef TSAContactsAuthorizedService_T1Synchronization_h
#define TSAContactsAuthorizedService_T1Synchronization_h
@import Foundation;

@interface TSAContactsAuthorizedService (T1Synchronization)

/* instance methods */
- (id)synchronizationStateMetadataForAccount:(id)account;
- (void)updateAuthorizationStoreOnSynchronizationStateChanges;

@end

#endif /* TSAContactsAuthorizedService_T1Synchronization_h */
