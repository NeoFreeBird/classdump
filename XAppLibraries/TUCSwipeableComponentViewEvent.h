//
#ifndef TUCSwipeableComponentViewEvent_h
#define TUCSwipeableComponentViewEvent_h
@import Foundation;

#include "TUCComponentViewEvent.h"

@class NSString;

@interface TUCSwipeableComponentViewEvent : TUCComponentViewEvent { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 scribeType;
    @40@0:8:16@24@32 metaParameters;
    @40@0:8:16@24@32 detailParameters;
}

@property (nonatomic, readonly) NSString *eventTypeString;
@property (nonatomic, readonly) NSString *scribeAction;

/* instance methods */
- (id)initSelectionWithSwipeableComponentView:(id)view mediaIndex:(unsigned long long)index destination:(id)destination eventType:(unsigned long long)type;
- (id)initScribeWithSwipeableComponentView:(id)view scribeType:(unsigned long long)type currentIndex:(unsigned long long)index previousIndex:(unsigned long long)index;
- (id)initSwipeWithSwipeableComponentView:(id)view currentIndex:(unsigned long long)index previousIndex:(unsigned long long)index;
- (id)eventMetadataWithDestinationPresenterResult:(id)result;
- (id)eventDetailsWithDestinationPresenterResult:(id)result;
- (id)initWithComponentView:(id)view eventType:(unsigned long long)type componentType:(unsigned long long)type;
- (id)initWithComponentView:(id)view eventType:(unsigned long long)type destination:(id)destination;
- (id)initWithSwipeEventType:(unsigned long long)type slideIndex:(id)index;
- (id)initWithEventType:(unsigned long long)type componentType:(unsigned long long)type destination:(id)destination;
- (id)initWithEventType:(unsigned long long)type componentType:(unsigned long long)type destination:(id)destination supplementalParams:(id)params slideIndex:(id)index scribeAction:(id)action;

@end

#endif /* TUCSwipeableComponentViewEvent_h */
