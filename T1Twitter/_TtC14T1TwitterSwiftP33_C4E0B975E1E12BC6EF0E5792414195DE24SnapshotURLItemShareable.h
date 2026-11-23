//
#ifndef _TtC14T1TwitterSwiftP33_C4E0B975E1E12BC6EF0E5792414195DE24SnapshotURLItemShareable_h
#define _TtC14T1TwitterSwiftP33_C4E0B975E1E12BC6EF0E5792414195DE24SnapshotURLItemShareable_h
@import Foundation;

#include "TSCSnapshotShareable-Protocol.h"
#include "_TtC14T1TwitterSwift16URLItemShareable.h"

@interface T1TwitterSwift.(SnapshotURLItemShareable in _C4E0B975E1E12BC6EF0E5792414195DE) : T1TwitterSwift.URLItemShareable <TSCSnapshotShareable> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *makeView;
}

@property (nonatomic, readonly) double snapshotScale;

/* instance methods */
- (id)externalShareableViewFor:(id)_for layoutMetrics:(id)metrics;
- (id)videoReactionShareableViewFor:(id)_for layoutMetrics:(id)metrics;

@end

#endif /* _TtC14T1TwitterSwiftP33_C4E0B975E1E12BC6EF0E5792414195DE24SnapshotURLItemShareable_h */
