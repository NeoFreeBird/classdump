//
#ifndef T1KeyboardShortcutDelegate_Protocol_h
#define T1KeyboardShortcutDelegate_Protocol_h
@import Foundation;

#include "TFNKeyboardShortcutDelegate-Protocol.h"

@protocol T1KeyboardShortcutDelegate <TFNKeyboardShortcutDelegate>

@required

@optional

/* optional instance methods */
- (void)handleDarkModeKeyCommand;
- (void)handleDefaultTextSizeKeyCommand;
- (void)handleIncreaseTextSizeKeyCommand;
- (void)handleDecreaseTextSizeKeyCommand;
- (void)handleDashKeyCommand;
- (void)handleSettingsKeyCommand;
- (void)handleSearchKeyCommand;
- (void)handleComposeTweetKeyCommand;
- (void)handleSendTweetKeyCommand;
- (void)handleComposeMessageKeyCommand;
- (void)handleReplyToMessageKeyCommand;
- (void)handleSendMessageKeyCommand;
- (void)handleReplyKeyCommand;
- (void)handleRetweetKeyCommand;
- (void)handleUndoRetweetKeyCommand;
- (void)handleLikeKeyCommand;
- (void)handleUndoLikeKeyCommand;
- (void)handleBookmarkKeyCommand;
- (void)handleUndoBookmarkKeyCommand;
- (void)handleViewUserKeyCommand;
- (void)handleOpenMediaKeyCommand;
- (void)handleOpenQuotedTweetKeyCommand;
- (void)handleOpenURLKeyCommand;
- (void)handleTweetLinkCopyKeyCommand;
- (void)handleAccountListKeyCommand;
- (void)handleNextAccountKeyCommand;
- (void)handlePreviousAccountKeyCommand;
- (void)handleHomePanelKeyCommand;
- (void)handleMomentsPanelKeyCommand;
- (void)handleConnectPanelKeyCommand;
- (void)handleDMsPanelKeyCommand;
- (void)handleBookmarksPanelKeyCommand;
- (void)handleActivityHistoryPanelKeyCommand;
- (void)handleListsPanelKeyCommand;
- (void)handleProfilePanelKeyCommand;
- (void)handleDashPanelKeyCommand;
- (void)handleCommunitiesPanelKeyCommand;
- (void)handleVoicePanelKeyCommand;
- (void)handleCreatorPanelKeyCommand;
- (void)handleBirdwatchPanelKeyCommand;
- (void)handleGrokPanelKeyCommand;
- (void)handlePremiumHubPanelKeyCommand;
- (void)handleJobsPanelKeyCommand;
- (void)handlePaymentsPanelKeyCommand;
- (void)handleOfflineCachePanelKeyCommand;
- (void)handleAccountAnalyticsPanelKeyCommand;
- (void)handleNewsPanelKeyCommand;
- (void)handleConnectTabPanelKeyCommand;

@end

#endif /* T1KeyboardShortcutDelegate_Protocol_h */
