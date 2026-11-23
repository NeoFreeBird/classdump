//
#ifndef _TtC13QuickComposer25QuickComposerPresentation_h
#define _TtC13QuickComposer25QuickComposerPresentation_h
@import Foundation;

@class QuickComposer.QuickComposerContent, QuickComposer.QuickComposerOutsideGestures, QuickComposer.QuickComposerPageHomeView, QuickComposer.QuickComposerPagePinning ?, QuickComposer.QuickComposerPlacement ?, QuickComposer.QuickComposerPresentation.Options, QuickComposer.QuickComposerSystem, QuickComposer.QuickComposerView ?, Swift.Bool, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject, __C.CGRect _$scSg ->;

@interface QuickComposer.QuickComposerPresentation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    QuickComposer.QuickComposerPresentation.Options options;
    QuickComposer.QuickComposerContent content;
    weak __C.UIViewController? viewController;
    __C.CGRect _$scSg -> onFrameChange;
    Swift.Bool isBound;
    QuickComposer.QuickComposerView ? suppliedView;
    QuickComposer.QuickComposerSystem system;
    QuickComposer.QuickComposerPageHomeView home;
    QuickComposer.QuickComposerOutsideGestures gestures;
    QuickComposer.QuickComposerPlacement ? placement;
    Swift.Bool isEndingEditingForDismissal;
    QuickComposer.QuickComposerPagePinning ? pinning;
    Swift.Bool slotWasMountedBeforeBar;
    Swift.Bool isAwaitingContent;
}

@end

#endif /* _TtC13QuickComposer25QuickComposerPresentation_h */
