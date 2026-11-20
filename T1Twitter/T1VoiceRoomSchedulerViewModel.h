//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomSchedulerViewModel_h
#define T1VoiceRoomSchedulerViewModel_h
@import Foundation;

@class NSObject;

@interface T1VoiceRoomSchedulerViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *context;
    NSNumber"16@0:8 *title;
    NSNumber"16@0:8 *isAvailableForReplay;
    NSNumber"16@0:8 *isAvailableForClipping;
    NSNumber"16@0:8 *scheduleMinuteInterval;
    NSNumber"16@0:8 *topicIDs;
    NSNumber"16@0:8 *narrowCastType;
    NSNumber"16@0:8 *contentType;
    NSNumber"16@0:8 *isAvailableForTweetSharing;
    NSNumber"16@0:8 *communityID;
    NSNumber"16@0:8 *noIncognito;
    NSNumber"16@0:8 *now;
    NSNumber"16@0:8 *timeProvider;
    NSNumber"16@0:8 *calendar;
    NSNumber"16@0:8 *systemClockObserver;
    NSNumber"16@0:8 *delegate;
}

/* instance methods */
- (id)initWithContext:(id)context title:(id)title isAvailableForReplay:(_Bool)replay isAvailableForClipping:(_Bool)clipping isAvailableForTweetSharing:(_Bool)sharing topicIDs:(id)ids narrowCastType:(long long)type contentType:(long long)type communityID:(id)id noIncognito:(_Bool)incognito;
- (void)dealloc;
- (id)init;

@end

#endif /* T1VoiceRoomSchedulerViewModel_h */
