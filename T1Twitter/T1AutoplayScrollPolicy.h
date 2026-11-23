//
#ifndef T1AutoplayScrollPolicy_h
#define T1AutoplayScrollPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSObject, NSString, TFNDataViewController;

@interface T1AutoplayScrollPolicy : NSObject <TAVUIAutoplayFilterPolicy, UIScrollViewDelegate>

@property (weak, nonatomic) TFNDataViewController *dataViewController;
@property (copy, nonatomic) id /* block */ autoplayConditionsDidChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataViewController:(id)controller;
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (_Bool)scrollViewShouldScrollToTop:(id)top;
- (void)scrollViewDidScrollToTop:(id)top;

@end

#endif /* T1AutoplayScrollPolicy_h */
