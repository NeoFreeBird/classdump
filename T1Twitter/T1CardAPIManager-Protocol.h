//
#ifndef T1CardAPIManager_Protocol_h
#define T1CardAPIManager_Protocol_h
@import Foundation;

@protocol T1CardAPIManager

@required

/* required instance methods */
- (void)registerForPeriodicReadsFromCapiURL:(id)url atInterval:(double)interval requestData:(id)data accountID:(id)id forCardIdentifier:(id)identifier fireImmediately:(_Bool)immediately;
- (void)unregisterForPeriodicReadsForCardIdentifier:(id)identifier;

@optional

@end

#endif /* T1CardAPIManager_Protocol_h */
