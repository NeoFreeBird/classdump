//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
