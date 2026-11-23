//
#ifndef TASSharingDelegate_Protocol_h
#define TASSharingDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TASSharingDelegate <NSObject>

@required

/* required instance methods */
- (void)sharing:(id)sharing sendSharingEvent:(id)event;

@optional

@end

#endif /* TASSharingDelegate_Protocol_h */
