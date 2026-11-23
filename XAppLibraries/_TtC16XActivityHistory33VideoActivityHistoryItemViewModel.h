//
#ifndef _TtC16XActivityHistory33VideoActivityHistoryItemViewModel_h
#define _TtC16XActivityHistory33VideoActivityHistoryItemViewModel_h
@import Foundation;

@class NSObject, _$s12CoreGraphics7CGFloatVMn, _$s14TFSTwitterCore28XActivityHistoryStatusAccessMp, _$sSS, _$sSSSg, _$ss5Int64VMn;

@interface XActivityHistory.VideoActivityHistoryItemViewModel : NSObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSTwitterCore.XActivityHistoryStatusAccess status;
    Swift.String statusID;
    Swift.String? mediaKey;
    Swift.String statusText;
    Swift.String displayName;
    nominal type descriptor for Swift.Int64 watchedSeconds;
    nominal type descriptor for Swift.Int64 durationSeconds;
    nominal type descriptor for Swift.Int64 timestamp;
    Swift.String? thumbnailURL;
    nominal type descriptor for CoreGraphics.CGFloat mediaAspectRatio;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC16XActivityHistory33VideoActivityHistoryItemViewModel_h */
