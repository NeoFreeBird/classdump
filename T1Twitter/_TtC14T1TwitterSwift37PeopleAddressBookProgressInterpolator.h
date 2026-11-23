//
#ifndef _TtC14T1TwitterSwift37PeopleAddressBookProgressInterpolator_h
#define _TtC14T1TwitterSwift37PeopleAddressBookProgressInterpolator_h
@import Foundation;

@class NSObject, T1TwitterSwift.PeopleAddressBookProgressInterpolatorDelegate ?, _$sSaySo14TFSProgressing_pG, _$sSd, _$sSo8TFSTimerCSg;

@interface T1TwitterSwift.PeopleAddressBookProgressInterpolator : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.PeopleAddressBookProgressInterpolatorDelegate ? delegate;
    __C.TFSTimer? timer;
    [__C.TFSProgressing] items;
    Swift.Double ticks;
    Swift.Double reportedProgress;
}

/* instance methods */
- (void)dealloc;
- (void)tick;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift37PeopleAddressBookProgressInterpolator_h */
