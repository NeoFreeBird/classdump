//
#ifndef URTDisplayActionsManagerDelegate_Protocol_h
#define URTDisplayActionsManagerDelegate_Protocol_h
@import Foundation;

@protocol URTDisplayActionsManagerDelegate

@required

/* required instance methods */
- (_Bool)urtDisplayActionsManager:(id)manager hasAvailableContentNotifications:(id)notifications;

@optional

@end

#endif /* URTDisplayActionsManagerDelegate_Protocol_h */
