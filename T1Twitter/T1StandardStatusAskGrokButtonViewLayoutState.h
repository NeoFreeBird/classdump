//
#ifndef T1StandardStatusAskGrokButtonViewLayoutState_h
#define T1StandardStatusAskGrokButtonViewLayoutState_h
@import Foundation;

@class NSString, TFNComposableViewLayoutState;

@interface T1StandardStatusAskGrokButtonViewLayoutState : TFNComposableViewLayoutState

@property (copy, nonatomic) NSString *askGrokButtonTitle;
@property (nonatomic) _Bool isBotAccountReply;

/* instance methods */

@end

#endif /* T1StandardStatusAskGrokButtonViewLayoutState_h */
