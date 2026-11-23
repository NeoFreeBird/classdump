//
#ifndef TAVPlayerSessionProducer_h
#define TAVPlayerSessionProducer_h
@import Foundation;

#include "TVPPlayerSessionProducible-Protocol.h"

@class NSObject, NSString;

@interface TAVPlayerSessionProducer : NSObject

@property (readonly, nonatomic) id <TVPPlayerSessionProducible> sessionProducible;
@property (readonly, copy, nonatomic) NSString *playerFactoryIdentifier;

/* instance methods */
- (id)initWithSessionProducible:(id)producible playerFactoryIdentifier:(id)identifier;

@end

#endif /* TAVPlayerSessionProducer_h */
