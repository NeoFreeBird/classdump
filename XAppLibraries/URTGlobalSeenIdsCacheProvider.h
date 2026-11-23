//
#ifndef URTGlobalSeenIdsCacheProvider_h
#define URTGlobalSeenIdsCacheProvider_h
@import Foundation;

@class NSObject;

@interface URTGlobalSeenIdsCacheProvider : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 lock;
    @40@0:8:16@24@32 caches;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (id)cacheForAccountID:(id)id;

@end

#endif /* URTGlobalSeenIdsCacheProvider_h */
