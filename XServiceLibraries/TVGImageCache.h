//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
