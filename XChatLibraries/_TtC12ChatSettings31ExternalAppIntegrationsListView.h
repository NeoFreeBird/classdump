//
#ifndef _TtC12ChatSettings31ExternalAppIntegrationsListView_h
#define _TtC12ChatSettings31ExternalAppIntegrationsListView_h
@import Foundation;

@class ChatSettings.ExternalAppIntegrationsListViewListener ?, UIView, _$s13XDesignSystem6ButtonCMn, _$sSa -> ChatModels.ChatExternalAppIntegration, _$sSo11UIStackViewC, _$sSo12UIScrollViewC, _$sSo7UILabelC;

@interface ChatSettings.ExternalAppIntegrationsListView : UIView { // (Swift)
    /* instance variables */
    ChatSettings.ExternalAppIntegrationsListViewListener ? listener;
    Swift.Array -> ChatModels.ChatExternalAppIntegration integrations;
    __C.UIScrollView scrollView;
    __C.UIStackView contentStack;
    nominal type descriptor for XDesignSystem.Button disconnectAllButton;
    __C.UILabel footerLabel;
    __C.UIStackView integrationsStack;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC12ChatSettings31ExternalAppIntegrationsListView_h */
