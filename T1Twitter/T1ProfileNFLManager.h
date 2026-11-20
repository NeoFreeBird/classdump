//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileNFLManager_h
#define T1ProfileNFLManager_h
@import Foundation;

@class NSObject;

@interface T1ProfileNFLManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *scheduleTeamUserID;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *scheduleCarouselEnabled;
    NSNumber"16@0:8 *sportsRosterManager;
    NSNumber"16@0:8 *scheduleAvailability;
}

@property (nonatomic, readonly) _Bool shouldDisplayScheduleCarousel;
@property (nonatomic, readonly) long long rosterCount;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)loadAvailabilityIfNeededWithUserID:(id)id onInvalidate:(id /* block */)invalidate;
- (id)makeRosterViewControllerWithTeamLogoURLString:(id)urlstring;
- (id)init;

@end

#endif /* T1ProfileNFLManager_h */
