//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK19StoryPagerComponent_h
#define _TtC10JetfuelSDK19StoryPagerComponent_h
@import Foundation;

#include "_TtC10JetfuelSDK14PagerComponent.h"

@class JetfuelSDK.StoriesViewModel, Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi;

@interface JetfuelSDK.StoryPagerComponent : JetfuelSDK.PagerComponent { // (Swift)
    /* instance variables */
    JetfuelSDK.StoriesViewModel storyModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Bool suppressNextProgrammaticScrollAnimation;
    Swift.Int expectedStoryCount;
}

/* instance methods */
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidScroll:(id)scroll;

@end

#endif /* _TtC10JetfuelSDK19StoryPagerComponent_h */
