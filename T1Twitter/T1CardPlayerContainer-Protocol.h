//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CardPlayerContainer_Protocol_h
#define T1CardPlayerContainer_Protocol_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"

@protocol T1CardPlayerContainer <T1AutoplayableContainer, TAVAutoplayViewContainer>

@required

/* required instance methods */
- (void)playFullscreen;
- (void)prepareForReuse;

@optional

@end

#endif /* T1CardPlayerContainer_Protocol_h */
