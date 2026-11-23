//
#ifndef TTSTypeaheadVoiceOverAnnouncementController_h
#define TTSTypeaheadVoiceOverAnnouncementController_h
@import Foundation;

@class NSObject;

@interface TTSTypeaheadVoiceOverAnnouncementController : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 hasAnnounced;
    @40@0:8:16@24@32 notificationPoster;
}

/* instance methods */
- (id)init;
- (void)sendVoiceOverAnnouncementNotificationIfNeeded;

@end

#endif /* TTSTypeaheadVoiceOverAnnouncementController_h */
