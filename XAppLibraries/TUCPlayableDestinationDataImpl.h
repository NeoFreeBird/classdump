//
#ifndef TUCPlayableDestinationDataImpl_h
#define TUCPlayableDestinationDataImpl_h
@import Foundation;

#include "TUCButtonData.h"
#include "TUCPlayableDestinationData-Protocol.h"

@class NSObject;

@interface TUCPlayableDestinationDataImpl : NSObject <TUCPlayableDestinationData> // (Swift)

@property (nonatomic, readonly) TUCButtonData *button;

/* instance methods */
- (id)initWithButton:(id)button;
- (id)init;

@end

#endif /* TUCPlayableDestinationDataImpl_h */
