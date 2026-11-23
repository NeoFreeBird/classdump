//
#ifndef T1SynchronizeContactsOperationDelegate_Protocol_h
#define T1SynchronizeContactsOperationDelegate_Protocol_h
@import Foundation;

#include "T1DeleteContactsOperationDelegate-Protocol.h"
#include "T1UploadContactsOperationDelegate-Protocol.h"

@protocol T1SynchronizeContactsOperationDelegate <T1DeleteContactsOperationDelegate, T1UploadContactsOperationDelegate>

@required

/* required instance methods */
- (void)synchronizeContactsOperationDidFinish:(id)finish;

@optional

@end

#endif /* T1SynchronizeContactsOperationDelegate_Protocol_h */
