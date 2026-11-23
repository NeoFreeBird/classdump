//
#ifndef NSTextStorageDelegate_Protocol_h
#define NSTextStorageDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NSTextStorageDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)textStorage:(id)storage willProcessEditing:(unsigned long long)editing range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range changeInLength:(long long)length;
- (void)textStorage:(id)storage didProcessEditing:(unsigned long long)editing range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range changeInLength:(long long)length;

@end

#endif /* NSTextStorageDelegate_Protocol_h */
