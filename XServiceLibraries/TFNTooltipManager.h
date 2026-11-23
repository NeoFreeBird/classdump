//
#ifndef TFNTooltipManager_h
#define TFNTooltipManager_h
@import Foundation;

#include "TFNTooltipViewDelegate-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSString, UIView;
@protocol TFNTooltipManagerDataSource;

@interface TFNTooltipManager : NSObject <TFNTooltipViewDelegate>

@property (nonatomic) _Bool isSharedManager;
@property (retain, nonatomic) NSMutableSet *visibleTooltips;
@property (retain, nonatomic) NSMapTable *visibleTooltipsForTooltipViews;
@property (retain, nonatomic) NSMutableDictionary *eventTooltips;
@property (retain, nonatomic) NSMutableDictionary *eventPresentationCount;
@property (retain, nonatomic) NSMutableDictionary *eventLastTriggered;
@property (retain, nonatomic) NSMutableDictionary *eventTriggerCount;
@property (retain, nonatomic) NSMutableDictionary *eventTracked;
@property (weak, nonatomic) id <TFNTooltipManagerDataSource> dataSource;
@property (weak, nonatomic) UIView *overlay;
@property (nonatomic) _Bool tapAnywhereToDismissEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedTooltipManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (_Bool)tooltipIsAnimating:(id)animating;
- (_Bool)tooltipIsShowing:(id)showing;
- (_Bool)anyTooltipIsShowing;
- (void)presentTooltip:(id)tooltip targetView:(id)view;
- (void)presentTooltip:(id)tooltip target:(id)target;
- (void)presentTooltip:(id)tooltip inView:(id)view target:(id)target;
- (void)presentTooltip:(id)tooltip inView:(id)view targetView:(id)view;
- (void)presentTooltip:(id)tooltip inView:(id)view targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)presentTooltip:(id)tooltip inView:(id)view targetPoint:(struct CGPoint { double x0; double x1; })point;
- (void)_presentTooltip:(id)tooltip inView:(id)view target:(id)target animationType:(unsigned long long)type;
- (void)repositionTooltip:(id)tooltip;
- (void)repositionTooltip:(id)tooltip target:(id)target;
- (void)repositionTooltip:(id)tooltip targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)repositionTooltip:(id)tooltip targetPoint:(struct CGPoint { double x0; double x1; })point;
- (void)repositionAllTooltips;
- (id)_addOverlay;
- (void)_addOverlayIfNeeded;
- (void)_removeOverlay;
- (void)_removeOverlayIfNeeded;
- (void)_dismissVisibleTooltipsIfNecessary;
- (void)registerTooltip:(id)tooltip forEvent:(id)event;
- (void)unregisterTooltipForEvent:(id)event;
- (void)triggerNoShowEvent:(id)event;
- (void)triggerEvent:(id)event targetView:(id)view;
- (void)triggerEvent:(id)event targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)triggerEvent:(id)event targetPoint:(struct CGPoint { double x0; double x1; })point;
- (void)triggerEvent:(id)event target:(id)target;
- (void)triggerEvent:(id)event inView:(id)view target:(id)target;
- (void)triggerEvent:(id)event inView:(id)view targetView:(id)view;
- (void)triggerEvent:(id)event inView:(id)view targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)triggerEvent:(id)event inView:(id)view targetPoint:(struct CGPoint { double x0; double x1; })point;
- (void)_triggerEvent:(id)event inView:(id)view target:(id)target;
- (_Bool)willEventPresentTooltip:(id)tooltip;
- (void)setOnceOnlyPresentationCriteriaForEvent:(id)event;
- (void)setPresentationCriteriaForEvent:(id)event maxPresentations:(unsigned long long)presentations presentationFrequency:(unsigned long long)frequency;
- (void)clearPresentationCriteriaForEvent:(id)event;
- (_Bool)isEventPresented:(id)presented;
- (_Bool)_isTrackedEvent:(id)event;
- (_Bool)_shouldPresentForTrackedEvent:(id)event recorded:(_Bool)recorded;
- (void)_keyboardDidChange:(id)change;
- (void)_loadUserConfig;
- (void)_saveUserConfig;
- (void)dismissTooltip:(id)tooltip;
- (void)dismissTooltip:(id)tooltip withAnimationType:(unsigned long long)type;
- (void)dismissAllTooltips;
- (void)_removeUITextViewTextDidChangeObserver:(id)observer;
- (void)tooltipViewDidTap:(id)tap;
- (void)tooltipViewWillShow:(id)show;
- (void)tooltipViewDidShow:(id)show;
- (void)tooltipViewWillDismiss:(id)dismiss;
- (void)tooltipViewDidDismiss:(id)dismiss;
- (id)_tooltipForTooltipView:(id)view;
- (_Bool)isTapAnywhereToDismissEnabled;

@end

#endif /* TFNTooltipManager_h */
