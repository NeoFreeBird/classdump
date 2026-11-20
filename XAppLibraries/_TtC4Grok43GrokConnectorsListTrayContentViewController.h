//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok43GrokConnectorsListTrayContentViewController_h
#define _TtC4Grok43GrokConnectorsListTrayContentViewController_h
@import Foundation;

@class Grok.GrokConnectorDetailTrayContentViewController.Subject _$scSg ->, Grok.GrokConnectorIconViewCache, Grok.GrokConnectorsListTrayContentViewController.LoadState, Grok.GrokConnectorsListTrayContentViewController.Mode, Grok.GrokConnectorsRepository, Grok.GrokGatewayLinkedAccount, _$s13XDesignSystem29TrayListContentViewControllerCN, _$s7Combine14AnyCancellableCMn ?, _$sScTyyt _$ss5NeverOMn ?;

@interface Grok.GrokConnectorsListTrayContentViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    Grok.GrokConnectorDetailTrayContentViewController.Subject _$scSg -> onSelectConnector;
    Grok.GrokConnectorsListTrayContentViewController.Mode mode;
    Grok.GrokGatewayLinkedAccount linkedAccount;
    Grok.GrokConnectorsRepository repository;
    Grok.GrokConnectorIconViewCache iconViews;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    nominal type descriptor for Combine.AnyCancellable ? repositoryObservation;
    Grok.GrokConnectorsListTrayContentViewController.LoadState state;
}

/* instance methods */

@end

#endif /* _TtC4Grok43GrokConnectorsListTrayContentViewController_h */
