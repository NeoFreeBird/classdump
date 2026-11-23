//
#ifndef T1VoiceTrackThreadLoader_h
#define T1VoiceTrackThreadLoader_h
@import Foundation;

@class NSArray, NSObject;

@interface T1VoiceTrackThreadLoader : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *timelineUpdater;
    NSNumber"16@0:8 *timelineCommonEventsObserver;
    NSNumber"16@0:8 *urtViewModelTranslator;
    NSNumber"16@0:8 *observers;
    NSNumber"16@0:8 *linealStatuses;
    NSNumber"16@0:8 *conversationID;
}

@property (nonatomic, readonly) NSArray *ancestors;
@property (nonatomic, readonly) NSArray *descendants;

/* instance methods */
- (id)initWithAccount:(id)account conversationID:(long long)id referrer:(id)referrer controllerData:(id)data;
- (void)loadInitial:(long long)initial;
- (void)addObserver:(id)observer;
- (id)init;

@end

#endif /* T1VoiceTrackThreadLoader_h */
