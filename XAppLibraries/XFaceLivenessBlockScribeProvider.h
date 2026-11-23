//
#ifndef XFaceLivenessBlockScribeProvider_h
#define XFaceLivenessBlockScribeProvider_h
@import Foundation;

#include "XFaceLivenessScribeProvider-Protocol.h"

@class NSObject;

@interface XFaceLivenessBlockScribeProvider : NSObject <XFaceLivenessScribeProvider> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 logBlock;
}

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element;
- (id)init;

@end

#endif /* XFaceLivenessBlockScribeProvider_h */
