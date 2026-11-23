//
#ifndef TCRComposerSchedulePickerPresenter_h
#define TCRComposerSchedulePickerPresenter_h
@import Foundation;

@class NSObject;

@interface TCRComposerSchedulePickerPresenter : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 tray;
}

/* instance methods */
- (void)presentSchedulePickerFrom:(id)from scheduledAt:(id)at onSchedule:(id /* block */)schedule onClear:(id /* block */)clear;
- (id)init;

@end

#endif /* TCRComposerSchedulePickerPresenter_h */
