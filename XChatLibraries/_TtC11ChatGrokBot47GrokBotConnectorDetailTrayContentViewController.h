//
#ifndef _TtC11ChatGrokBot47GrokBotConnectorDetailTrayContentViewController_h
#define _TtC11ChatGrokBot47GrokBotConnectorDetailTrayContentViewController_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class ChatGrokBot.GrokBotAutoReviewCodeBlockView, ChatGrokBot.GrokBotConnectAsk.Primary _$s_SDyS2SGtcSg ->, ChatGrokBot.GrokBotConnectorDetail, ChatGrokBot.GrokBotConnectorDetailHeaderView ?, ChatGrokBot.GrokBotConnectorDetailStackView, ChatGrokBot.GrokBotConnectorNoticeView, ChatGrokBot.GrokBotConnectorSourceLinkControl, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListGroupCMn ?, _$s6XIcons5XIconOMn, _$s7Combine12AnyPublisherVMn ChatGrokBot.GrokBotConnectorDetail _$ss5NeverOMn, _$s8Dispatch0A8WorkItemCMn ?, _$sSa -> ChatGrokBot.GrokBotConnectorDetail.Included _$sG_SSSg _$s10Foundation3URLVMn _$sSgt, _$sSa -> ChatGrokBot.GrokBotConnectorSetupFieldView, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo12UIScrollViewC, _$sSo6UIViewC, _$sSo7UIImageCSg, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotConnectorDetailTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onDisconnect;
    (() -> ())? onManageConnection;
    ChatGrokBot.GrokBotConnectAsk.Primary _$s_SDyS2SGtcSg -> onPrimary;
    ChatGrokBot.GrokBotConnectorDetail detail;
    nominal type descriptor for Combine.AnyPublisher ChatGrokBot.GrokBotConnectorDetail nominal type descriptor for Swift.Never detailPublisher;
    Swift.Bool hasFollowedConnect;
    Swift.Array -> ChatGrokBot.GrokBotConnectorDetail.Included _$sG_SSSg nominal type descriptor for Foundation.URL _$sSgt includedBoxContent;
    nominal type descriptor for XDesignSystem.ListGroup ? includedBoxView;
    nominal type descriptor for CoreGraphics.CGFloat growth;
    Swift.Bool isExpanded;
    Swift.Bool isMeasuringIntrinsicHeight;
    Swift.Array -> ChatGrokBot.GrokBotConnectorSetupFieldView setupFieldViews;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    nominal type descriptor for Dispatch.DispatchWorkItem ? successDismissWorkItem;
    __C.UIView heroSpacerView;
    ChatGrokBot.GrokBotConnectorDetailStackView stackView;
    __C.UIScrollView scrollView;
    ChatGrokBot.GrokBotAutoReviewCodeBlockView commandBlockView;
    __C.UILabel commandSectionHeaderLabel;
    __C.UILabel descriptionLabel;
    __C.UILabel detailsSectionHeaderLabel;
    __C.UILabel includedSectionHeaderLabel;
    ChatGrokBot.GrokBotConnectorNoticeView noticeView;
    __C.UILabel outcomeTitleLabel;
    __C.UILabel outcomeValueLabel;
    __C.UILabel setupIntroLabel;
    __C.UILabel setupSectionHeaderLabel;
    ChatGrokBot.GrokBotConnectorSourceLinkControl sourceLinkControl;
    __C.UILabel unsupportedSetupLabel;
    nominal type descriptor for XDesignSystem.ListGroup ? $__lazy_storage_$_outcomeBoxView;
    ChatGrokBot.GrokBotConnectorDetailHeaderView ? $__lazy_storage_$_headerView;
    nominal type descriptor for XIcons.XIcon glyph;
    __C.UIImage? logo;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didTapSource;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot47GrokBotConnectorDetailTrayContentViewController_h */
