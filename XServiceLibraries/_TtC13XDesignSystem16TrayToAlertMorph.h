//
#ifndef _TtC13XDesignSystem16TrayToAlertMorph_h
#define _TtC13XDesignSystem16TrayToAlertMorph_h
@import Foundation;

@class Swift.Bool, XDesignSystem.TrayManagerViewController ?, _$sSa -> XDesignSystem.TrayToAlertMorph.Mover, _$sSaySo11UIImageViewCG, _$sSayyycG, _$sSo6UIViewCSgXw, _TtCs12_SwiftObject, __C.CGRect;

@interface XDesignSystem.TrayToAlertMorph : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XDesignSystem.TrayManagerViewController ? tray;
    weak __C.UIView? titleSourceOverride;
    weak __C.UIView? bodySource;
    Swift.Bool priorInteractionLock;
    Swift.Bool didCommit;
    Swift.Bool didTransferDim;
    Swift.Array -> XDesignSystem.TrayToAlertMorph.Mover movers;
    [__C.UIImageView] lateArrivalViews;
    [() -> ()] restorations;
    __C.CGRect restingCardFrame;
    Swift.Bool isInFlight;
}

@end

#endif /* _TtC13XDesignSystem16TrayToAlertMorph_h */
