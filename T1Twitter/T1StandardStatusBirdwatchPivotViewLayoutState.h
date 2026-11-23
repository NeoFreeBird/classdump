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
