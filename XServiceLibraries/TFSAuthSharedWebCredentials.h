//
#ifndef TFSAuthSharedWebCredentials_h
#define TFSAuthSharedWebCredentials_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TFSAuthSharedWebCredentials : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *webCredentialsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

/* class methods */
+ (id)sharedWebCredentials;

/* instance methods */
- (void)fetchAccountCredentialWithUsername:(id)username domain:(id)domain completion:(id /* block */)completion;
- (void)updateAccountCredentialWithUsername:(id)username domain:(id)domain password:(id)password completion:(id /* block */)completion;

@end

#endif /* TFSAuthSharedWebCredentials_h */
