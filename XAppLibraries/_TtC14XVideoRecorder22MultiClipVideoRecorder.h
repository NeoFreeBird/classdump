//
#ifndef _TtC14XVideoRecorder22MultiClipVideoRecorder_h
#define _TtC14XVideoRecorder22MultiClipVideoRecorder_h
@import Foundation;

@class XVideoRecorder.MultiClipRecordingCamera, XVideoRecorder.MultiClipVideoRecorderDelegate ?, XVideoRecorder.MultiClipVideoRecorderState, _$s10Foundation3URLVMn, _$sSaySdG, _$sSaySiG, _$sSo13NSFileManagerC, _$ss6UInt64VMn, _TtCs12_SwiftObject;

@interface XVideoRecorder.MultiClipVideoRecorder : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoRecorder.MultiClipVideoRecorderDelegate ? delegate;
    XVideoRecorder.MultiClipVideoRecorderState state;
    [Swift.Double] clipBoundaries;
    [Swift.Int] segmentCountAtEachBoundary;
    XVideoRecorder.MultiClipRecordingCamera camera;
    nominal type descriptor for Foundation.URL workingFolder;
    __C.NSFileManager fileManager;
    nominal type descriptor for Swift.UInt64 sessionToken;
}

@end

#endif /* _TtC14XVideoRecorder22MultiClipVideoRecorder_h */
