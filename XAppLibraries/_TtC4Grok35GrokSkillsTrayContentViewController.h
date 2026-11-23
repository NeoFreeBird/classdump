//
#ifndef _TtC4Grok35GrokSkillsTrayContentViewController_h
#define _TtC4Grok35GrokSkillsTrayContentViewController_h
@import Foundation;

#include "SFSafariViewControllerDelegate-Protocol.h"

@class Grok.GrokGatewayLinkedAccount, Grok.GrokSkillItem _$scSg ->, Grok.GrokSkillsStore, Grok.GrokSkillsTrayContentViewController.LoadState, _$s10Foundation3URLVMn _$scSg ->, _$s13XDesignSystem29TrayListContentViewControllerCN, _$sScTyyt _$ss5NeverOMn ?, _$sySa -> Grok.GrokSkillItem _$sGcSg;

@interface Grok.GrokSkillsTrayContentViewController : type metadata for XDesignSystem.TrayListContentViewController <SFSafariViewControllerDelegate> { // (Swift)
    /* instance variables */
    Grok.GrokSkillItem _$scSg -> onSelect;
     empty-list Swift.Array -> Grok.GrokSkillItem _$sGcSg onItemsLoaded;
    nominal type descriptor for Foundation.URL _$scSg -> onManage;
    Grok.GrokGatewayLinkedAccount linkedAccount;
    Grok.GrokSkillsStore store;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadingGraceTask;
    Grok.GrokSkillsTrayContentViewController.LoadState state;
}

/* instance methods */
- (void)safariViewControllerDidFinish:(id)finish;

@end

#endif /* _TtC4Grok35GrokSkillsTrayContentViewController_h */
