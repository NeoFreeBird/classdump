//
#ifndef TNLSimpleRequestDelegate_h
#define TNLSimpleRequestDelegate_h
@import Foundation;

#include "TNLRequestDelegate-Protocol.h"

@class NSObject, NSString;

@interface TNLSimpleRequestDelegate : NSObject <TNLRequestDelegate> {
    /* instance variables */
    id /* block */ _didCompleteBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;

@end

#endif /* TNLSimpleRequestDelegate_h */
