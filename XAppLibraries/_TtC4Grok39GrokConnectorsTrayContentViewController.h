//
#ifndef _TtC4Grok39GrokConnectorsTrayContentViewController_h
#define _TtC4Grok39GrokConnectorsTrayContentViewController_h
@import Foundation;

#include "SFSafariViewControllerDelegate-Protocol.h"

@class Grok.GrokConnectorIconViewCache, Grok.GrokConnectorPreferences, Grok.GrokConnectorsRepository, Grok.GrokConnectorsTrayContentViewController.LoadState, Grok.GrokGatewayLinkedAccount, _$s10Foundation3URLVMn _$scSg ->, _$s13XDesignSystem29TrayListContentViewControllerCN, _$s7Combine14AnyCancellableCMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo7UILabelC;

@interface Grok.GrokConnectorsTrayContentViewController : type metadata for XDesignSystem.TrayListContentViewController <SFSafariViewControllerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL _$scSg -> onOpenWeb;
    Grok.GrokGatewayLinkedAccount linkedAccount;
    Grok.GrokConnectorsRepository repository;
    Grok.GrokConnectorPreferences preferences;
    Grok.GrokConnectorIconViewCache iconViews;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadingGraceTask;
    nominal type descriptor for Combine.AnyCancellable ? repositoryObservation;
    __C.UILabel promotionBodyLabel;
    Grok.GrokConnectorsTrayContentViewController.LoadState state;
}

/* instance methods */
- (void)safariViewControllerDidFinish:(id)finish;

@end

#endif /* _TtC4Grok39GrokConnectorsTrayContentViewController_h */
