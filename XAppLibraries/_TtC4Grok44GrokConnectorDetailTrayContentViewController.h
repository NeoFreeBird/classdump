//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok44GrokConnectorDetailTrayContentViewController_h
#define _TtC4Grok44GrokConnectorDetailTrayContentViewController_h
@import Foundation;

@class Grok.GrokConnectorDetailTrayContentViewController.Subject, Grok.GrokConnectorOAuthManager ?, Grok.GrokConnectorsRepository, Grok.GrokGatewayLinkedAccount, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$syycSg;

@interface Grok.GrokConnectorDetailTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    (() -> ())? onOpenWeb;
    (() -> ())? onDidChangeConnection;
    Grok.GrokConnectorDetailTrayContentViewController.Subject subject;
    Grok.GrokGatewayLinkedAccount linkedAccount;
    Grok.GrokConnectorsRepository repository;
    Grok.GrokConnectorOAuthManager ? $__lazy_storage_$_oauthManager;
    Swift.String? pendingCreatedConnectorID;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? connectTask;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC4Grok44GrokConnectorDetailTrayContentViewController_h */
