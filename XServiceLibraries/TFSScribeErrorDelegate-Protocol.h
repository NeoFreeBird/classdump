//
#ifndef TFSScribeErrorDelegate_Protocol_h
#define TFSScribeErrorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSScribeErrorDelegate <NSObject>

@required

/* required instance methods */
- (void)scribeService:(id)service didEncounterError:(id)error;

@optional

@end

#endif /* TFSScribeErrorDelegate_Protocol_h */
