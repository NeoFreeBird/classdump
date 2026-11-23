//
#ifndef TFSNumberAbbreviation_Protocol_h
#define TFSNumberAbbreviation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSNumberAbbreviation <NSObject>

@required

/* required instance methods */
- (id)abbreviatedStringForNumber:(id)number;

@optional

@end

#endif /* TFSNumberAbbreviation_Protocol_h */
