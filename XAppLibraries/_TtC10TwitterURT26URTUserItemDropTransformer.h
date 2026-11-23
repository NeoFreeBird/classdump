//
#ifndef _TtC10TwitterURT26URTUserItemDropTransformer_h
#define _TtC10TwitterURT26URTUserItemDropTransformer_h
@import Foundation;

#include "TFNItemsTransformer-Protocol.h"

@class NSObject;

@interface TwitterURT.URTUserItemDropTransformer : NSObject <TFNItemsTransformer> // (Swift)

/* instance methods */
- (id)transformItem:(id)item;
- (id)init;

@end

#endif /* _TtC10TwitterURT26URTUserItemDropTransformer_h */
