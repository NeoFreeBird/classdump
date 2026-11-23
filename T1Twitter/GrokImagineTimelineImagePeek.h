//
#ifndef GrokImagineTimelineImagePeek_h
#define GrokImagineTimelineImagePeek_h
@import Foundation;

@class NSObject;

@interface GrokImagineTimelineImagePeek : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *loadedStatusIdentifiers;
    NSNumber"16@0:8 *loadedStatusesStorage;
}

/* class methods */
+ (id)sharedFor:(id)_for;

/* instance methods */
- (void)updateLoadedStatuses:(id)statuses;
- (id)init;

@end

#endif /* GrokImagineTimelineImagePeek_h */
