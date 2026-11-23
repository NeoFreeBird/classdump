//
#ifndef TAVPlayerFactoryIdentifiable_Protocol_h
#define TAVPlayerFactoryIdentifiable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVPlayerFactoryIdentifiable <NSObject>

@required

/* required instance methods */
- (id)playerSessionProducer;

@optional

@end

#endif /* TAVPlayerFactoryIdentifiable_Protocol_h */
