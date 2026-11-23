//
#ifndef _TtC13QuickComposer29QuickComposerExpansionContext_h
#define _TtC13QuickComposer29QuickComposerExpansionContext_h
@import Foundation;

@class QuickComposer.QuickComposerCollapseMorph ?, QuickComposer.QuickComposerExpandMorph ?, QuickComposer.QuickComposerExpansion.Trigger ?, QuickComposer.QuickComposerExpansionContext.Phase, QuickComposer.QuickComposerExpansionContext.Phase _$scSg ->, QuickComposer.QuickComposerExpansionPreparation ?, QuickComposer.QuickComposerKeyboardHold ?, QuickComposer.QuickComposerTransitionDestination ?, QuickComposer.QuickComposerTransitionHost ?, QuickComposer.QuickComposerView ?, Swift.Bool, _$sSa -> QuickComposer.QuickComposerItemID, _TtCs12_SwiftObject, __C.CGRect ?;

@interface QuickComposer.QuickComposerExpansionContext : Swift._SwiftObject { // (Swift)
    /* instance variables */
    QuickComposer.QuickComposerExpansionContext.Phase phase;
    Swift.Bool isMorphing;
    QuickComposer.QuickComposerExpansion.Trigger ? trigger;
    QuickComposer.QuickComposerTransitionDestination ? destination;
    QuickComposer.QuickComposerExpansionPreparation ? preparation;
    QuickComposer.QuickComposerExpansionContext.Phase _$scSg -> onPhaseChange;
    QuickComposer.QuickComposerView ? bar;
    QuickComposer.QuickComposerExpandMorph ? expandMorph;
    QuickComposer.QuickComposerCollapseMorph ? collapseMorph;
    QuickComposer.QuickComposerKeyboardHold ? keyboardHold;
    QuickComposer.QuickComposerTransitionHost ? host;
    Swift.Bool interactiveCollapseStarted;
    __C.CGRect ? keyboardFrame;
    Swift.Array -> QuickComposer.QuickComposerItemID pageElementIDs;
}

@end

#endif /* _TtC13QuickComposer29QuickComposerExpansionContext_h */
