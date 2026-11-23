//
#ifndef TNUSimpleDownloadRequestDelegate_h
#define TNUSimpleDownloadRequestDelegate_h
@import Foundation;

#include "TNLRequestDelegate-Protocol.h"

@class NSObject, NSString;

@interface TNUSimpleDownloadRequestDelegate : NSObject <TNLRequestDelegate> {
    /* instance variables */
    id /* block */ _didCompleteBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDidCompleteBlock:(id /* block */)block;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (void)tnl_requestOperation:(id)operation didUpdateDownloadProgress:(float)progress;

@end

#endif /* TNUSimpleDownloadRequestDelegate_h */
