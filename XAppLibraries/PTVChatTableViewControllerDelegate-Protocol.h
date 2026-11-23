//
#ifndef PTVChatTableViewControllerDelegate_Protocol_h
#define PTVChatTableViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatTableViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)chatTableViewController:(id)controller didTapMessage:(id)message;
- (void)chatTableViewControllerDidSelectShareFromScreenshotPrompt:(id)prompt sourceViewForActivityViewController:(id)controller;
- (void)chatTableViewController:(id)controller didSelectShareBroadcastButtonFromBroadcasterAction:(_Bool)action;
- (void)chatTableViewControllerDidUpdateNumberOfUnreadMessages:(id)messages;
- (void)chatTableViewControllerDidUpdateShouldScrollToBottomButtonBeVisible:(id)visible;
- (void)chatTableViewControllerDidUpdateShouldScrollEducationBeVisible:(id)visible;
- (void)chatTableViewControllerDidTapGuestBroadcastingButton:(id)button;
- (void)chatTableViewController:(id)controller didMuteMessage:(id)message;

@end

#endif /* PTVChatTableViewControllerDelegate_Protocol_h */
