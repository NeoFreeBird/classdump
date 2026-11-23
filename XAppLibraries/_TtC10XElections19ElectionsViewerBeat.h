//
#ifndef _TtC10XElections19ElectionsViewerBeat_h
#define _TtC10XElections19ElectionsViewerBeat_h
@import Foundation;

@class Swift.Bool, _$s20TwitterActionService0bC0CMn, _$s7Combine9PublishedVMn _$sSiSg, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface XElections.ElectionsViewerBeat : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.Int? _viewers;
    Swift.String electionID;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? task;
    Swift.Bool isRunning;
}

/* instance methods */
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;

@end

#endif /* _TtC10XElections19ElectionsViewerBeat_h */
