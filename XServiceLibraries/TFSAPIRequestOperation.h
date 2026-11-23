//
#ifndef TFSAPIRequestOperation_h
#define TFSAPIRequestOperation_h
@import Foundation;

#include "TFSAPIRequestDelegate-Protocol.h"
#include "TNLRequestOperation.h"

@interface TFSAPIRequestOperation : TNLRequestOperation

@property (retain, nonatomic) id context;
@property (weak, nonatomic) id <TFSAPIRequestDelegate> apiRequestDelegate;

/* instance methods */

@end

#endif /* TFSAPIRequestOperation_h */
