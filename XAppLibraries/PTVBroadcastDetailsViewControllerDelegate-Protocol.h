//
#ifndef PTVBroadcastDetailsViewControllerDelegate_Protocol_h
#define PTVBroadcastDetailsViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastDetailsViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastDetailsViewControllerDidSelectMap:(id)map;
- (void)broadcastDetailsViewController:(id)controller didSelectViewer:(id)viewer;
- (void)broadcastDetailsViewControllerPresentModerationSettings:(id)settings;
- (_Bool)broadcastDetailsViewControllerCanPresentModerationSettings:(id)settings;
- (void)broadcastDetailsViewControllerPresentBlockedUsers:(id)users;

@end

#endif /* PTVBroadcastDetailsViewControllerDelegate_Protocol_h */
