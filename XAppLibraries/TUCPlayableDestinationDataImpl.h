//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
