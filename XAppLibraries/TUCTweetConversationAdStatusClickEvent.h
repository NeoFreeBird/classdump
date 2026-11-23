//
#ifndef TUCTweetConversationAdStatusClickEvent_h
#define TUCTweetConversationAdStatusClickEvent_h
@import Foundation;

#include "TUCComponentViewEvent.h"

@interface TUCTweetConversationAdStatusClickEvent : TUCComponentViewEvent { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 isDeprecatedEvent;
}

/* instance methods */
- (id)initWithDestination_deprecated:(id)destination_deprecated;
- (id)initWithDestination:(id)destination slideIndex:(id)index selectedMediaOfSingleDestinationCarousel:(id)carousel;
- (id)eventMetadataWithDestinationPresenterResult:(id)result;
- (id)initWithComponentView:(id)view eventType:(unsigned long long)type componentType:(unsigned long long)type;
- (id)initWithComponentView:(id)view eventType:(unsigned long long)type destination:(id)destination;
- (id)initWithSwipeEventType:(unsigned long long)type slideIndex:(id)index;
- (id)initWithEventType:(unsigned long long)type componentType:(unsigned long long)type destination:(id)destination;
- (id)initWithEventType:(unsigned long long)type componentType:(unsigned long long)type destination:(id)destination supplementalParams:(id)params slideIndex:(id)index scribeAction:(id)action;

@end

#endif /* TUCTweetConversationAdStatusClickEvent_h */
