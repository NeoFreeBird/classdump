//
#ifndef PTVVideoOverlayViewControllerBroadcasterDelegate_Protocol_h
#define PTVVideoOverlayViewControllerBroadcasterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoOverlayViewControllerBroadcasterDelegate <NSObject>

@required

/* required instance methods */
- (void)broadcasterDidBlockUser:(id)user;
- (void)broadcasterDidBlockUserFromMessage:(id)message;
- (void)broadcasterDidUnblockUser:(id)user;
- (void)broadcasterDidReportUserFromMessage:(id)message reportType:(unsigned long long)type;
- (void)broadcasterDidSelectReportGuestUser:(id)user;
- (void)videoOverlayViewControllerDidSelectPrivacySettings:(id)settings;
- (void)videoOverlayViewController:(id)controller didSelectShowSurvey:(id)survey;

@optional

/* optional instance methods */
- (void)videoOverlayViewControllerDidSelectShareScreenshot:(id)screenshot sourceViewForActivityViewController:(id)controller;
- (void)videoOverlayViewControllerDidSelectShareBroadcast:(id)broadcast shareHighlightSelectedByDefault:(_Bool)_default;
- (void)videoOverlayViewControllerDidSelectAudioScopeButton:(id)button;
- (void)videoOverlayViewControllerDidSelectOverflowMenu:(id)menu;
- (void)videoOverlayViewControllerDidSelectShowBroadcastDetails:(id)details;
- (void)videoOverlayViewControllerDidSelectEditBroadcast:(id)broadcast;
- (void)videoOverlayViewControllerDidSelectModerationReport:(id)report;
- (void)videoOverlayViewControllerDidSelectReadOnly:(id)only;
- (void)videoOverlayViewControllerReplayDidSelectPlayReplay:(id)replay;
- (void)videoOverlayViewControllerReplayDidSelectPauseReplay:(id)replay;
- (void)videoOverlayViewControllerDidSelectBroadcastCallInList:(id)list;
- (void)videoOverlayViewControllerDidBeginComposingMessage:(id)message;
- (void)videoOverlayViewControllerDidChangeMessage:(id)message;
- (void)videoOverlayViewControllerDidTapOnContributors:(id)contributors withContributorWatcher:(id)watcher presentUserIDs:(id)ids;

@end

#endif /* PTVVideoOverlayViewControllerBroadcasterDelegate_Protocol_h */
