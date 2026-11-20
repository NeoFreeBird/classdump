//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASMultiScheduledSpaceViewModel_h
#define TASMultiScheduledSpaceViewModel_h
@import Foundation;

@class NSObject;

@interface TASMultiScheduledSpaceViewModel : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 context;
    @40@0:8:16@24@32 scheduledSpaces;
    @40@0:8:16@24@32 delegate;
}

/* instance methods */
- (id)initWithContext:(id)context;
- (id)initWithContext:(id)context scheduledSpaces:(id)spaces;
- (id)init;

@end

#endif /* TASMultiScheduledSpaceViewModel_h */
