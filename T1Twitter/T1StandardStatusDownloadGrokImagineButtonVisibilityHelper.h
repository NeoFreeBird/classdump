//
#ifndef T1StandardStatusDownloadGrokImagineButtonVisibilityHelper_h
#define T1StandardStatusDownloadGrokImagineButtonVisibilityHelper_h
@import Foundation;

@class NSObject;

@interface T1StandardStatusDownloadGrokImagineButtonVisibilityHelper : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *timelineVisibilityCache;
    NSNumber"16@0:8 *focalVisibilityCache;
    NSNumber"16@0:8 *replyVisibilityCache;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)resetCache;

@end

#endif /* T1StandardStatusDownloadGrokImagineButtonVisibilityHelper_h */
