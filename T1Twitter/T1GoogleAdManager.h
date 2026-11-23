//
#ifndef T1GoogleAdManager_h
#define T1GoogleAdManager_h
@import Foundation;

@class NSObject;

@interface T1GoogleAdManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *queue;
    NSNumber"16@0:8 *adCaches;
    NSNumber"16@0:8 *adLoaders;
    NSNumber"16@0:8 *evictedEntryIDs;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)reportAdWithEntryID:(id)id scribePage:(id)page;

@end

#endif /* T1GoogleAdManager_h */
