//
#ifndef TVGImageCache_h
#define TVGImageCache_h
@import Foundation;

@class NSCache, NSObject;

@interface TVGImageCache : NSObject {
    /* instance variables */
    NSCache *_cache;
}

/* class methods */
+ (id)sharedImageCache;

/* instance methods */
- (id)init;
- (id)imageForKey:(id)key;
- (void)setImage:(id)image forKey:(id)key;
- (void)purgeCache;
- (void)applicationDidReceiveMemoryWarning:(id)warning;

@end

#endif /* TVGImageCache_h */
