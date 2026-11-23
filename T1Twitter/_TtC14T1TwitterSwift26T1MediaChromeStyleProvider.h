//
#ifndef _TtC14T1TwitterSwift26T1MediaChromeStyleProvider_h
#define _TtC14T1TwitterSwift26T1MediaChromeStyleProvider_h
@import Foundation;

@class _$s5TAVUI15MediaViewStylesVMn, _$sSo11NSHashTableC _$s5TAVUI25MediaViewStyleObservationCMn, _$sSo20NSNotificationCenterC, _TtCs12_SwiftObject;

@interface T1TwitterSwift.T1MediaChromeStyleProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSHashTable nominal type descriptor for TAVUI.MediaViewStyleObservation observers;
    nominal type descriptor for TAVUI.MediaViewStyles currentStyle;
    __C.NSNotificationCenter notificationCenter;
}

/* instance methods */
- (void)tfn_fontSizeChanged;
- (void)tfn_dynamicColorsDidReload:(id)reload;

@end

#endif /* _TtC14T1TwitterSwift26T1MediaChromeStyleProvider_h */
