//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusMediaTagsViewLayoutState_h
#define T1StandardStatusMediaTagsViewLayoutState_h
@import Foundation;

@class TFNComposableViewLayoutState, TFSTwitterTagSet;

@interface T1StandardStatusMediaTagsViewLayoutState : TFNComposableViewLayoutState

@property (retain, nonatomic) TFSTwitterTagSet *primaryMediaTags;

/* instance methods */

@end

#endif /* T1StandardStatusMediaTagsViewLayoutState_h */
