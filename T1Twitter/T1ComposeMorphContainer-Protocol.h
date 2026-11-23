//
#ifndef T1ComposeMorphContainer_Protocol_h
#define T1ComposeMorphContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1ComposeMorphDestination-Protocol.h"

@protocol T1ComposeMorphContainer <NSObject>

@required

@property (nonatomic, readonly) id <T1ComposeMorphDestination> morphDestination;

/* required instance methods */
- (void)setMorphStaged:(_Bool)staged;

@optional

@end

#endif /* T1ComposeMorphContainer_Protocol_h */
