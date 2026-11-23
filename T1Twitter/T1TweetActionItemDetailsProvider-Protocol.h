//
#ifndef T1TweetActionItemDetailsProvider_Protocol_h
#define T1TweetActionItemDetailsProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, TFNTwitterComposition;

@protocol T1TweetActionItemDetailsProvider <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) id /* block */ completion;

@optional

@end

#endif /* T1TweetActionItemDetailsProvider_Protocol_h */
