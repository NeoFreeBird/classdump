//
#ifndef TAVLoggingScribe_h
#define TAVLoggingScribe_h
@import Foundation;

#include "TAVScribe-Protocol.h"
#include "TFSLogger-Protocol.h"

@class NSObject;

@interface TAVLoggingScribe : NSObject <TAVScribe>

@property (readonly, nonatomic) id <TFSLogger> logger;

/* instance methods */
- (id)init;
- (id)initWithLogger:(id)logger;
- (void)logClientEventWithName:(id)name parameters:(id)parameters;
- (void)logPromotedEventWithName:(id)name parameters:(id)parameters;

@end

#endif /* TAVLoggingScribe_h */
