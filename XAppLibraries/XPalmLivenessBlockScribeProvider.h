//
#ifndef XPalmLivenessBlockScribeProvider_h
#define XPalmLivenessBlockScribeProvider_h
@import Foundation;

#include "XPalmLivenessScribeProvider-Protocol.h"

@class NSObject;

@interface XPalmLivenessBlockScribeProvider : NSObject <XPalmLivenessScribeProvider> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 logBlock;
}

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element;
- (id)init;

@end

#endif /* XPalmLivenessBlockScribeProvider_h */
