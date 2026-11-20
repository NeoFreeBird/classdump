//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13QuickComposer19QuickComposerSystem_h
#define _TtC13QuickComposer19QuickComposerSystem_h
@import Foundation;

@class QuickComposer.QuickComposerBindingDecision _$sSO, QuickComposer.QuickComposerBindingTarget ?, QuickComposer.QuickComposerSlotView, QuickComposer.QuickComposerSystem.ViewSource ?, QuickComposer.QuickComposerView ?, Swift.Bool, _$s11XNavigation16TabBarControllerCMn ?, _$sSa -> QuickComposer.QuickComposerSystem.WeakTarget, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _TtCs12_SwiftObject;

@interface QuickComposer.QuickComposerSystem : Swift._SwiftObject { // (Swift)
    /* instance variables */
    QuickComposer.QuickComposerSlotView slotView;
    nominal type descriptor for XNavigation.TabBarController ? tabBarController;
    QuickComposer.QuickComposerView ? createdView;
    QuickComposer.QuickComposerSystem.ViewSource ? viewSource;
    Swift.Array -> QuickComposer.QuickComposerSystem.WeakTarget targets;
    QuickComposer.QuickComposerBindingTarget ? bound;
    QuickComposer.QuickComposerBindingDecision Swift.ObjectIdentifier decision;
    Swift.Bool isCleared;
    Swift.Int clearGeneration;
    Swift.Bool isSelectingTab;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC13QuickComposer19QuickComposerSystem_h */
