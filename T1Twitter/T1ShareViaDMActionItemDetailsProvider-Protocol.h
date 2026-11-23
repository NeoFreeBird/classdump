//
#ifndef T1ShareViaDMActionItemDetailsProvider_Protocol_h
#define T1ShareViaDMActionItemDetailsProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol T1ShareViaDMActionItemDetailsProvider <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *shareText;
@property (readonly, copy, nonatomic) NSString *attachmentLink;
@property (readonly, nonatomic) id /* block */ completion;

@optional

@end

#endif /* T1ShareViaDMActionItemDetailsProvider_Protocol_h */
