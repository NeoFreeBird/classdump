//
#ifndef _TtC12XVideoEditor22VideoClipButtonSession_h
#define _TtC12XVideoEditor22VideoClipButtonSession_h
@import Foundation;

@class XVideoEditor.VideoClipButtonBackoff.Limits ?, XVideoEditor.VideoClipButtonSession.Exposure, _$s10Foundation4DateVMn _$syc, _$sSS, _$sSbSg, _$sSo14NSUserDefaultsC, _$sSo24TPSFeatureSwitchesAccess_pSg, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoClipButtonSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSUserDefaults defaults;
    Swift.String defaultsKey;
    __C.TPSFeatureSwitchesAccess? featureSwitches;
    nominal type descriptor for Foundation.Date _$syc now;
    XVideoEditor.VideoClipButtonSession.Exposure exposure;
    XVideoEditor.VideoClipButtonBackoff.Limits ? $__lazy_storage_$_limits;
    Swift.Bool? $__lazy_storage_$_allowsShowing;
}

@end

#endif /* _TtC12XVideoEditor22VideoClipButtonSession_h */
