//
#ifndef TFSVideoFilterExecutionGate_h
#define TFSVideoFilterExecutionGate_h
@import Foundation;

#include "TAVTVideoFilterExecutionGate-Protocol.h"

@class NSLock, NSMutableArray, NSObject;

@interface TFSVideoFilterExecutionGate : NSObject <TAVTVideoFilterExecutionGate> {
    /* instance variables */
    long long _applicationState;
    _Bool _installed;
    NSMutableArray *_activeWaiters;
    NSLock *_lock;
}

@property (readonly, nonatomic) _Bool videoFiltersCanRun;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)waitUntilVideoFiltersCanRun;
- (void)_installIfNeededOnMain;
- (_Bool)_isActive;
- (void)_waitUntilApplicationIsActive;
- (void)_didBecomeActive;
- (void)_willResignActive;
- (void)_didEnterBackground;
- (void)_willEnterForeground;

@end

#endif /* TFSVideoFilterExecutionGate_h */
