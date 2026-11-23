//
#ifndef T1StatusInlineCollapseButtonController_h
#define T1StatusInlineCollapseButtonController_h
@import Foundation;

#include "TFNViewControllerEventObserver-Protocol.h"

@class NSObject;

@interface T1StatusInlineCollapseButtonController : NSObject <TFNViewControllerEventObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *controller;
    NSNumber"16@0:8 *collapseBehavior;
    NSNumber"16@0:8 *button;
    NSNumber"16@0:8 *contentOffsetObservation;
    NSNumber"16@0:8 *contentSizeObservation;
    NSNumber"16@0:8 *scrollIndicatorInsetsObservation;
    NSNumber"16@0:8 *needsEvaluation;
    NSNumber"16@0:8 *presentation;
    NSNumber"16@0:8 *candidateCell;
    NSNumber"16@0:8 *buttonCenterYConstraint;
    NSNumber"16@0:8 *tabBarGuideConstraints;
    NSNumber"16@0:8 *isTabBarCollapsed;
    NSNumber"16@0:8 *floatingActionButton;
    NSNumber"16@0:8 *floatingActionButtonObservations;
}

/* class methods */
+ (void)attachIfNeededToController:(id)controller animationEnabled:(_Bool)enabled;

/* instance methods */
- (void)viewControllerViewDidFullyAppear:(id)appear;
- (void)withdrawOffer;
- (void)handleTap;
- (id)init;

@end

#endif /* T1StatusInlineCollapseButtonController_h */
