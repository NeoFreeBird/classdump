//
#ifndef TFSTwitterAPIAccountQRLoginCommand_h
#define TFSTwitterAPIAccountQRLoginCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIAccountQRLoginCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *qrCode;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id qrCode:(id)code source:(unsigned long long)source completionBlock:(id /* block */)block;

@end

#endif /* TFSTwitterAPIAccountQRLoginCommand_h */
