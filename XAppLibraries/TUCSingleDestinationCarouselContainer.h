//
#ifndef TUCSingleDestinationCarouselContainer_h
#define TUCSingleDestinationCarouselContainer_h
@import Foundation;

#include "TUCDefaultContainer.h"
#include "TUCExperimentSignals.h"

@interface TUCSingleDestinationCarouselContainer : TUCDefaultContainer

@property (readonly, nonatomic) TUCExperimentSignals *experimentSignals;

/* instance methods */
- (id)initWithComponents:(id)components displayOptions:(id)options experimentSignals:(id)signals;
- (_Bool)hasCarousel;
- (id)firstVideoComponent;
- (id)withPromotedContent:(id)content;
- (id)withComponentsTransform:(id /* block */)transform;
- (id)withRemovedComponentsOfType:(unsigned long long)type;

@end

#endif /* TUCSingleDestinationCarouselContainer_h */
