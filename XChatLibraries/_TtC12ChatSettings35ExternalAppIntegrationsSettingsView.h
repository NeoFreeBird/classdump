//
#ifndef _TtC12ChatSettings35ExternalAppIntegrationsSettingsView_h
#define _TtC12ChatSettings35ExternalAppIntegrationsSettingsView_h
@import Foundation;

@class ChatModels.ChatExternalAppIntegrationsState, ChatSettings.ExternalAppIntegrationsListView, ChatSettings.ExternalAppIntegrationsSettingsViewListener ?, ChatSettings.ExternalAppIntegrationsShimmerView, ChatUI.ChatEmptyStateView ?, UIView;

@interface ChatSettings.ExternalAppIntegrationsSettingsView : UIView { // (Swift)
    /* instance variables */
    ChatSettings.ExternalAppIntegrationsSettingsViewListener ? listener;
    ChatModels.ChatExternalAppIntegrationsState state;
    ChatSettings.ExternalAppIntegrationsListView listView;
    ChatSettings.ExternalAppIntegrationsShimmerView shimmerView;
    ChatUI.ChatEmptyStateView ? $__lazy_storage_$_emptyView;
    ChatUI.ChatEmptyStateView ? $__lazy_storage_$_errorView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC12ChatSettings35ExternalAppIntegrationsSettingsView_h */
