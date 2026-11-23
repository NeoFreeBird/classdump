//
#ifndef GADIntermissionStateMonitor_h
#define GADIntermissionStateMonitor_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADPresenterSource-Protocol.h"

@class NSObject, NSOperationQueue;

@interface GADIntermissionStateMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    _Bool _idleTimerWasOriginallyDisabled;
    NSOperationQueue *_deactivationQueue;
    _Bool _applicationBackgroundedDueToAdAction;
    _Bool _applicationStateIntermissionControlled;
}

@property (weak, nonatomic) id <GADPresenterSource> presenterSource;

/* instance methods */
- (id)init;
- (void)saveApplicationState;
- (void)restoreApplicationState;
- (void)notifyIntermissionEvent;
- (_Bool)intermissionActive;
- (void)checkWhetherIntermissionDeactivated;
- (void)checkWhetherIntermissionActivated;
- (void)setDeactivationQueueSuspended:(_Bool)suspended;
- (void)sceneWillEnterForeground:(id)foreground;

@end

#endif /* GADIntermissionStateMonitor_h */
