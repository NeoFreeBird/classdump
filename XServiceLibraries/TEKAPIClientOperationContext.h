//
#ifndef TEKAPIClientOperationContext_h
#define TEKAPIClientOperationContext_h
@import Foundation;

#include "TEKTwitterAccount.h"

@class NSObject, NSString;

@interface TEKAPIClientOperationContext : NSObject

@property (retain, nonatomic) TEKTwitterAccount *account;
@property (copy, nonatomic) id /* block */ didStartBlock;
@property (copy, nonatomic) id /* block */ uploadProgressBlock;
@property (copy, nonatomic) id /* block */ downloadProgressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *uploadDataFilePath;

/* instance methods */

@end

#endif /* TEKAPIClientOperationContext_h */
