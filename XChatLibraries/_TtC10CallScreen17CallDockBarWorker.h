//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallScreen17CallDockBarWorker_h
#define _TtC10CallScreen17CallDockBarWorker_h
@import Foundation;

@class CallScreen.CallDockBarViewController ?, CallScreen.CallGlassDockVisibilityStream, CallScreen.CallMinimizationStream, CallScreen.CallScreenPresentationRequestStream, _$s11XFoundation13CombineWorkerCN, _$s13XDesignSystem19TopDockedBarHostingMp _$sSgyc;

@interface CallScreen.CallDockBarWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallScreen.CallGlassDockVisibilityStream callGlassDockVisibilityStream;
    CallScreen.CallMinimizationStream callMinimizationStream;
    CallScreen.CallScreenPresentationRequestStream callScreenPresentationRequestStream;
    protocol descriptor for XDesignSystem.TopDockedBarHosting _$sSgyc hostProvider;
    CallScreen.CallDockBarViewController ? dockBar;
}

@end

#endif /* _TtC10CallScreen17CallDockBarWorker_h */
