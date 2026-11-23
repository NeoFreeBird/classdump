//
#ifndef TWAAnimationCache_h
#define TWAAnimationCache_h
@import Foundation;

@class NSObject;

@interface TWAAnimationCache : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 cache;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)initWithMaxEntries:(unsigned long long)entries;
- (void)clearAllEntries;
- (id)init;

@end

#endif /* TWAAnimationCache_h */
