//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef THFSportsPostContextSectionTransformer_h
#define THFSportsPostContextSectionTransformer_h
@import Foundation;

@class NSObject;

@interface THFSportsPostContextSectionTransformer : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 minimumSpacing;
    @40@0:8:16@24@32 sameGameMinimumSpacing;
}

/* class methods */
+ (id)dataViewItemOption;
+ (_Bool)supportsTimelineWithUrtTimelineUID:(id)uid;
+ (_Bool)updateSectionsIfEligibilityChanged:(id)changed controller:(id)controller animation:(long long)animation completion:(id /* block */)completion;

/* instance methods */
- (id)initWithMinimumSpacing:(long long)spacing sameGameMinimumSpacing:(long long)spacing;
- (id)transformWithSections:(id)sections;
- (id)init;

@end

#endif /* THFSportsPostContextSectionTransformer_h */
