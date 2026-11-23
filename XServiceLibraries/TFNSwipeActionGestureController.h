//
#ifndef TFNSwipeActionGestureController_h
#define TFNSwipeActionGestureController_h
@import Foundation;

#include "TFNTableView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, NSIndexPath, NSObject, NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UIView;
@protocol TFNSwipeActionDelegate;

@interface TFNSwipeActionGestureController : NSObject <UIGestureRecognizerDelegate>

@property (readonly, weak, nonatomic) TFNTableView *tableView;
@property (readonly, weak, nonatomic) UIView *cellView;
@property (readonly, weak, nonatomic) UIView *contentView;
@property (readonly, weak, nonatomic) UIView *topCornerClipper;
@property (readonly, weak, nonatomic) UIView *bottomCornerClipper;
@property (readonly, weak, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (readonly, nonatomic) id /* block */ swipeRightCallback;
@property (readonly, nonatomic) id /* block */ swipeLeftCallback;
@property (readonly, nonatomic) id <TFNSwipeActionDelegate> swipeRightAction;
@property (readonly, nonatomic) id <TFNSwipeActionDelegate> swipeLeftAction;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *swipeActionImpact;
@property (nonatomic) _Bool didSwipeActionImpact;
@property (nonatomic) _Bool actionViewsAdded;
@property (nonatomic) _Bool dismissInProgress;
@property (nonatomic) struct CGPoint { double x0; double x1; } restingContentCenter;
@property (retain, nonatomic) CAShapeLayer *topCornerMask;
@property (retain, nonatomic) CAShapeLayer *bottomCornerMask;
@property (weak, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) _Bool isActivelySwiping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCellView:(id)view contentView:(id)view topCornerClipper:(id)clipper bottomCornerClipper:(id)clipper backgroundView:(id)view swipeRightAction:(id /* block */)action swipeLeftAction:(id /* block */)action;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setSwipeRevealBackgroundVisible:(_Bool)visible;
- (void)prepareForUseInTableView:(id)view;
- (_Bool)swipeRightEnabled;
- (_Bool)swipeLeftEnabled;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (_Bool)nestedScrollViewCanScrollWithPanGestureRecognizer:(id)recognizer;
- (_Bool)hasNestedHorizontalScrollViewFromView:(id)view passingTest:(id /* block */)test;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)didSwipe:(id)swipe;
- (void)resetSwipeWithActionPerformed:(_Bool)performed;
- (void)initializeSwipeNotificationObserver;
- (void)removeCornerRadiusObserver;
- (void)notifySwipeUpdate:(float)update reset:(_Bool)reset;
- (_Bool)isAdjacentRowAbove:(id)above;
- (_Bool)isAdjacentRowBelow:(id)below;
- (void)onCornerRadiusNotification:(id)notification;
- (void)updateAdjacentCornerClip:(unsigned long long)clip clipper:(id)clipper maskLayer:(id)layer translation:(double)translation;
- (void)resetAdjacentCornerClip:(unsigned long long)clip clipper:(id)clipper maskLayer:(id)layer;

@end

#endif /* TFNSwipeActionGestureController_h */
