//
#ifndef BGTaskScheduler_T1TwitterSwift_h
#define BGTaskScheduler_T1TwitterSwift_h
@import Foundation;

@interface BGTaskScheduler (T1TwitterSwift) <TwitterNotifications.BackgroundScheduling>

/* instance methods */
- (_Bool)registerWithTaskIdentifier:(id)identifier launchHandler:(id /* block */)handler;
- (_Bool)scheduleWithRequestWithIdentifier:(id)identifier earliestBeginDate:(id)date error:(id *)error;

@end

#endif /* BGTaskScheduler_T1TwitterSwift_h */
