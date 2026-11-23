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
