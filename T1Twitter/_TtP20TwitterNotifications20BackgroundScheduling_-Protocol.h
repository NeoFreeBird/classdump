//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP20TwitterNotifications20BackgroundScheduling__Protocol_h
#define _TtP20TwitterNotifications20BackgroundScheduling__Protocol_h
@import Foundation;

@protocol TwitterNotifications.BackgroundScheduling

@required

/* required instance methods */
- (_Bool)registerWithTaskIdentifier:(id)identifier launchHandler:(id /* block */)handler;
- (_Bool)scheduleWithRequestWithIdentifier:(id)identifier earliestBeginDate:(id)date error:(id *)error;

@optional

@end

#endif /* _TtP20TwitterNotifications20BackgroundScheduling__Protocol_h */
