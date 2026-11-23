//
#ifndef TCRComposeUndoManager_h
#define TCRComposeUndoManager_h
@import Foundation;

#include "TCRComposeUndoManagerDelegate-Protocol.h"

@class NSObject;

@interface TCRComposeUndoManager : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 undoStack;
    @40@0:8:16@24@32 redoStack;
    @40@0:8:16@24@32 textCoalescingTimer;
    @40@0:8:16@24@32 pendingTextSnapshot;
}

@property (nonatomic, weak) id <TCRComposeUndoManagerDelegate> delegate;
@property (nonatomic, readonly) _Bool canUndo;
@property (nonatomic, readonly) _Bool canRedo;

/* instance methods */
- (void)dealloc;
- (void)registerInitialSnapshot:(id)snapshot;
- (void)registerSnapshotForTextChange:(id)change;
- (void)registerSnapshotForDiscreteChange:(id)change;
- (id)undo;
- (id)redo;
- (void)removeAllSnapshots;
- (id)init;

@end

#endif /* TCRComposeUndoManager_h */
