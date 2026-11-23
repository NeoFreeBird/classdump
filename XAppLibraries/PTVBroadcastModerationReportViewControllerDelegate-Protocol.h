//
#ifndef PTVBroadcastModerationReportViewControllerDelegate_Protocol_h
#define PTVBroadcastModerationReportViewControllerDelegate_Protocol_h
@import Foundation;

@protocol PTVBroadcastModerationReportViewControllerDelegate

@required

/* required instance methods */
- (void)moderationReportViewController:(id)controller didSelectUser:(id)user;
- (void)presentSettingsFromModerationReportViewController:(id)controller;
- (_Bool)canPresentSettingsFromModerationReportViewController:(id)controller;
- (void)presentBlockedUsersFromModerationReportViewController:(id)controller;

@optional

@end

#endif /* PTVBroadcastModerationReportViewControllerDelegate_Protocol_h */
