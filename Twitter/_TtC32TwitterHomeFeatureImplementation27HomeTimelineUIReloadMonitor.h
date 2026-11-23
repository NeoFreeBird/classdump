//
#ifndef _TtC32TwitterHomeFeatureImplementation27HomeTimelineUIReloadMonitor_h
#define _TtC32TwitterHomeFeatureImplementation27HomeTimelineUIReloadMonitor_h
@import Foundation;

@class DispatchQueue, NSObject, TwitterURT25TFNTwitterTimelineScriber_p, _$sSd, _$sSi, _$sSo8TFSTimerCSg;

@interface TwitterHomeFeatureImplementation.HomeTimelineUIReloadMonitor : NSObject { // (Swift)
    /* instance variables */
    DispatchQueue accessQueue;
    __C.TFSTimer? timer;
    Swift.Int reloadCount;
    TwitterURT25TFNTwitterTimelineScriber_p timelineScriber;
    Swift.Double sampleInterval;
    Swift.Int rapidReloadThreshold;
}

/* instance methods */
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation27HomeTimelineUIReloadMonitor_h */
