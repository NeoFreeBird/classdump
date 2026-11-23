//
#ifndef TLTAppRestarter_h
#define TLTAppRestarter_h
@import Foundation;

#include "TLTAppRestarter-Protocol.h"

@class NSMutableSet, NSObject, NSString, TFSTimer;
@protocol OS_dispatch_queue;

@interface TLTAppRestarter : NSObject <TLTAppRestarter> {
    /* instance variables */
    _Atomic int _restartRequested;
    NSObject<OS_dispatch_queue> *_suppressIDsQueue;
    TFSTimer *_exitTimer;
    unsigned long long _backgroundTaskID;
}

@property (retain, nonatomic) NSString *firstRequestRestartScribeComponent;
@property (readonly, nonatomic) NSMutableSet *suppressIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)scribe;
+ (void)setScribe:(id)scribe;
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)requestRestartFromComponent:(id)component;
- (id)suppressRestarts;
- (void)resumeRestartsWithToken:(id)token;
- (unsigned long long)_suppressIDsCount;
- (void)_startRestartTimer;
- (void)_stopRestartTimer;
- (void)_setUpExitTimer;
- (void)_cancelExitTimer;
- (void)_scribeFirstRestartRequest;
- (void)_exit;

@end

#endif /* TLTAppRestarter_h */
