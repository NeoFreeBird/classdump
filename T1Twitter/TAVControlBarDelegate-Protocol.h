//
#ifndef TAVControlBarDelegate_Protocol_h
#define TAVControlBarDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVControlBarDelegate <NSObject>

@required

/* required instance methods */
- (id)controlBar:(id)bar itemForIdentifier:(id)identifier;

@optional

@end

#endif /* TAVControlBarDelegate_Protocol_h */
