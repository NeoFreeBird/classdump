//
#ifndef _TtC4DMV217TabViewController_h
#define _TtC4DMV217TabViewController_h
@import Foundation;

#include "_TtC4DMUI23ContainerViewController.h"

@class DMInbox.InboxNavigationActionTriggerStream, DMInbox.VerticalColumnStream, DMModels.TabStateStream, DMUI.RootNavigation, DMV2.TabContentPlugin ?, DMV2.TabContentPluginPoint, DMV2.TabView ?, DMV2.TabWorkerPluginPoint, UIScrollView, UIView, _$s9ChatInbox0B12FilterStreamCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UINavigationItemCSg;

@interface DMV2.TabViewController : DMUI.ContainerViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatInbox.InboxFilterStream inboxFilterStream;
    DMInbox.InboxNavigationActionTriggerStream inboxNavigationActionTriggerStream;
    __C.UINavigationItem? parentNavigationItem;
    DMUI.RootNavigation rootNavigation;
    DMV2.TabContentPluginPoint tabContentPluginPoint;
    DMModels.TabStateStream tabStateStream;
    DMV2.TabWorkerPluginPoint tabWorkerPluginPoint;
    DMInbox.VerticalColumnStream verticalColumnStream;
    DMV2.TabView ? $__lazy_storage_$_internalView;
    DMV2.TabContentPlugin ? currentContentPlugin;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;
@property (nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarShadowHidden;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (_Bool)tui_showsActionButton;
- (id)tui_actionButtonItemCategories;
- (id)tui_buttonItemForCategory:(unsigned long long)category;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_contentScrollViewContentInset;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC4DMV217TabViewController_h */
