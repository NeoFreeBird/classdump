//
#ifndef TUCCompactCardLayoutToggleEvent_h
#define TUCCompactCardLayoutToggleEvent_h
@import Foundation;

#include "TUCComponentViewEvent.h"

@interface TUCCompactCardLayoutToggleEvent : TUCComponentViewEvent // (Swift)

@property (nonatomic, readonly) long long action;

/* instance methods */
- (id)initWithComponentType:(unsigned long long)type destination:(id)destination action:(long long)action;
- (id)initWithComponentView:(id)view eventType:(unsigned long long)type componentType:(unsigned long long)type;
- (id)initWithComponentView:(id)view eventType:(unsigned long long)type destination:(id)destination;
- (id)initWithSwipeEventType:(unsigned long long)type slideIndex:(id)index;
- (id)initWithEventType:(unsigned long long)type componentType:(unsigned long long)type destination:(id)destination;
- (id)initWithEventType:(unsigned long long)type componentType:(unsigned long long)type destination:(id)destination supplementalParams:(id)params slideIndex:(id)index scribeAction:(id)action;

@end

#endif /* TUCCompactCardLayoutToggleEvent_h */
