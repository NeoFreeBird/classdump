//
#ifndef TUIErrorItem_Protocol_h
#define TUIErrorItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUIErrorItem <NSObject>

@required

/* required instance methods */
- (id)mainErrorText;
- (id)errorSubtext;
- (_Bool)subtextShouldBeActionColor;

@optional

@end

#endif /* TUIErrorItem_Protocol_h */
