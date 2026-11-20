//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusBirdwatchPivotViewLayoutState_h
#define T1StandardStatusBirdwatchPivotViewLayoutState_h
@import Foundation;

@class TFNComposableViewLayoutState, TFSTwitterBirdwatchPivot;

@interface T1StandardStatusBirdwatchPivotViewLayoutState : TFNComposableViewLayoutState { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *autoTranslatePreferenceVersion;
}

@property (nonatomic, retain) TFSTwitterBirdwatchPivot *birdwatchPivot;
@property (nonatomic) _Bool quoted;
@property (nonatomic) long long translationState;
@property (nonatomic) _Bool isShowingAutoTranslate;

/* instance methods */
- (id)init;

@end

#endif /* T1StandardStatusBirdwatchPivotViewLayoutState_h */
