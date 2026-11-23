//
#ifndef _TtC23TwitterCompositionSwift27ActiveEditingSessionStorage_h
#define _TtC23TwitterCompositionSwift27ActiveEditingSessionStorage_h
@import Foundation;

@class DispatchQueue, NSObject, TwitterCompositionSwift.ActiveEditingSessionStorage.Snapshot ?, _$s8Dispatch0A8WorkItemCMn ?;

@interface TwitterCompositionSwift.ActiveEditingSessionStorage : NSObject { // (Swift)
    /* instance variables */
    DispatchQueue ioQueue;
    nominal type descriptor for Dispatch.DispatchWorkItem ? pendingWorkItem;
    TwitterCompositionSwift.ActiveEditingSessionStorage.Snapshot ? pendingSnapshot;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)scheduleDebouncedSaveWithSnapshotBlock:(id /* block */)block;
- (void)flushPendingSave;
- (void)cancelPendingSave;
- (id)load;
- (void)clear;

@end

#endif /* _TtC23TwitterCompositionSwift27ActiveEditingSessionStorage_h */
