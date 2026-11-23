//
#ifndef _TtC4Grok20GrokComposeViewModel_h
#define _TtC4Grok20GrokComposeViewModel_h
@import Foundation;

@class Grok.GrokDelegate ?, Grok.GrokEventScriber, Grok.GrokSettingsProvider, Grok0A18AccountPerspective_p, Swift.Bool, _$s20TwitterActionService0bC0CMn, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sySa -> Grok.GrokComposeRevisionViewModel, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16TIPImagePipelineC, _$sySSc, _TtCs12_SwiftObject;

@interface Grok.GrokComposeViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokComposeRevisionViewModel _revisions;
    nominal type descriptor for Combine.Published Swift.Bool _canStartCompose;
    Grok.GrokDelegate ? delegate;
    __C.TIPImagePipeline imagePipeline;
    Grok0A18AccountPerspective_p grokAccount;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    Grok.GrokSettingsProvider settingsProvider;
    Swift.String premiumReferringPage;
    Grok.GrokEventScriber eventScriber;
    (Swift.String) -> () onAcceptRevision;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Bool isAwaitingAccountLinkEntry;
}

@end

#endif /* _TtC4Grok20GrokComposeViewModel_h */
