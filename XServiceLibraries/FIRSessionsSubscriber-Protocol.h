//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRSessionsSubscriber_Protocol_h
#define FIRSessionsSubscriber_Protocol_h
@import Foundation;

@protocol FIRSessionsSubscriber

@required

@property (nonatomic, readonly) _Bool isDataCollectionEnabled;
@property (nonatomic, readonly) long long sessionsSubscriberName;

/* required instance methods */
- (void)onSessionChanged:(id)changed;

@optional

@end

#endif /* FIRSessionsSubscriber_Protocol_h */
