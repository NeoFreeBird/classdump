//
#ifndef T1StandardStatusBodyViewLayoutState_h
#define T1StandardStatusBodyViewLayoutState_h
@import Foundation;

@class NSNumber, TFNComposableViewLayoutState;

@interface T1StandardStatusBodyViewLayoutState : TFNComposableViewLayoutState

@property (nonatomic) _Bool translatable;
@property (retain, nonatomic) NSNumber *validForHashflagVersion;
@property (nonatomic) _Bool validForFocalTweetIncompleteQuotedStatus;
@property (nonatomic) _Bool noteTweetInlineExpanded;
@property (nonatomic) _Bool showingAutoTranslated;
@property (nonatomic) long long translationState;

/* instance methods */
- (_Bool)isTranslatable;
- (_Bool)isShowingAutoTranslated;

@end

#endif /* T1StandardStatusBodyViewLayoutState_h */
