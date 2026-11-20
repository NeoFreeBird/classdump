//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
