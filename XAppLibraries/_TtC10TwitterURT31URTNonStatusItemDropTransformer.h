//
#ifndef _TtC10TwitterURT31URTNonStatusItemDropTransformer_h
#define _TtC10TwitterURT31URTNonStatusItemDropTransformer_h
@import Foundation;

#include "TFNItemsTransformer-Protocol.h"

@class NSObject;

@interface TwitterURT.URTNonStatusItemDropTransformer : NSObject <TFNItemsTransformer> // (Swift)

/* instance methods */
- (id)init;
- (id)transformItem:(id)item;

@end

#endif /* _TtC10TwitterURT31URTNonStatusItemDropTransformer_h */
