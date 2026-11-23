//
#ifndef T1StandardStatusNonPolicyCompliantTweetViewLayoutState_h
#define T1StandardStatusNonPolicyCompliantTweetViewLayoutState_h
@import Foundation;

@class TFNComposableViewLayoutState, TFSURTRichText;

@interface T1StandardStatusNonPolicyCompliantTweetViewLayoutState : TFNComposableViewLayoutState

@property (retain, nonatomic) TFSURTRichText *buttonRichText;
@property (retain, nonatomic) TFSURTRichText *outerTombstoneButtonRichText;

/* instance methods */

@end

#endif /* T1StandardStatusNonPolicyCompliantTweetViewLayoutState_h */
