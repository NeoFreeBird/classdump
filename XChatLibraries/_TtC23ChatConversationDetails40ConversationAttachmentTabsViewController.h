//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails40ConversationAttachmentTabsViewController_h
#define _TtC23ChatConversationDetails40ConversationAttachmentTabsViewController_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentCurrentTabStream, ChatConversationDetails.ConversationAttachmentTabBarView, ChatConversationDetails.ConversationAttachmentTabContentBuilding, ChatConversationDetails.ConversationAttachmentTabsPagingView ?, UIViewController, _$sSD -> ChatConversationDetails.ConversationAttachmentTab _$sSo16UIViewControllerC, _$sSa -> ChatConversationDetails.ConversationAttachmentTab, _$sSo12UIScrollViewCSgXw, _$sSo7UIColorC;

@interface ChatConversationDetails.ConversationAttachmentTabsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationAttachmentCurrentTabStream currentTabStream;
    __C.UIColor surface;
    ChatConversationDetails.ConversationAttachmentTabBarView tabBarView;
    ChatConversationDetails.ConversationAttachmentTabContentBuilding tabBuilder;
    Swift.Array -> ChatConversationDetails.ConversationAttachmentTab tabs;
    ChatConversationDetails.ConversationAttachmentTabsPagingView ? $__lazy_storage_$_pagingView;
    Swift.Dictionary -> ChatConversationDetails.ConversationAttachmentTab __C.UIViewController tabViewControllers;
    weak __C.UIScrollView? visibleScrollView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC23ChatConversationDetails40ConversationAttachmentTabsViewController_h */
