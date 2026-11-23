//
#ifndef T1AccountChooser_Protocol_h
#define T1AccountChooser_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFNTwitterAccount;

@protocol T1AccountChooser <NSObject>

@required

@property (retain, nonatomic) TFNTwitterAccount *currentAccount;
@property (copy, nonatomic) id /* block */ didChooseAccountBlock;

@optional

@end

#endif /* T1AccountChooser_Protocol_h */
