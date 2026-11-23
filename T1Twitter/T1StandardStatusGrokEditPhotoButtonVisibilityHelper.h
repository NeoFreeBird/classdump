//
#ifndef T1StandardStatusGrokEditPhotoButtonVisibilityHelper_h
#define T1StandardStatusGrokEditPhotoButtonVisibilityHelper_h
@import Foundation;

@class NSObject;

@interface T1StandardStatusGrokEditPhotoButtonVisibilityHelper : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *timelineDisplaySurfaceCache;
    NSNumber"16@0:8 *focalDisplaySurfaceCache;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)resetCache;
- (long long)editImageButtonModeForViewModel:(id)model displaySurface:(long long)surface;

@end

#endif /* T1StandardStatusGrokEditPhotoButtonVisibilityHelper_h */
