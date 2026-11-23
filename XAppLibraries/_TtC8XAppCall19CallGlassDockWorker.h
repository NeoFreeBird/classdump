//
#ifndef _TtC8XAppCall19CallGlassDockWorker_h
#define _TtC8XAppCall19CallGlassDockWorker_h
@import Foundation;

@class XAppCall.CallGlassDockBarContent ?, XAppCall.CallGlassDockHosting _$sSgyScMYcc, _$s10CallModels0A12ImageLoadingMp _$sSSc, _$s10CallScreen0A18MinimizationStreamCMn, _$s10CallScreen0A25GlassDockVisibilityStreamCMn, _$s10CallScreen0aB25PresentationRequestStreamCMn, _$s11XFoundation13CombineWorkerCN, _$sSo16UIViewControllerCSgyc;

@interface XAppCall.CallGlassDockWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for CallScreen.CallGlassDockVisibilityStream callGlassDockVisibilityStream;
    nominal type descriptor for CallScreen.CallMinimizationStream callMinimizationStream;
    nominal type descriptor for CallScreen.CallScreenPresentationRequestStream callScreenPresentationRequestStream;
    XAppCall.CallGlassDockHosting _$sSgyScMYcc hostProvider;
    protocol descriptor for CallModels.CallImageLoading _$sSSc imageLoaderProvider;
    () -> __C.UIViewController? presenterProvider;
    XAppCall.CallGlassDockBarContent ? dockBar;
}

@end

#endif /* _TtC8XAppCall19CallGlassDockWorker_h */
