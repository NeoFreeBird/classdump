//
#ifndef PTVBroadcastModerationReportTableViewControllerDelegate_Protocol_h
#define PTVBroadcastModerationReportTableViewControllerDelegate_Protocol_h
@import Foundation;

@protocol PTVBroadcastModerationReportTableViewControllerDelegate

@required

/* required instance methods */
- (void)moderationReportTableViewControllerSelectionDidChange:(id)change;
- (void)moderationReportTableViewController:(id)controller didSelectUser:(id)user;
- (void)moderationReportTableViewController:(id)controller didUpdateWithCount:(unsigned long long)count;
- (void)moderationReportTableViewControllerPresentGroupSettings:(id)settings;
- (void)moderationReportTableViewControllerDidSelectShowBlockedUsers:(id)users;
- (_Bool)moderationReportTableViewControllerCanPresentGroupSettings:(id)settings;

@optional

@end

#endif /* PTVBroadcastModerationReportTableViewControllerDelegate_Protocol_h */
