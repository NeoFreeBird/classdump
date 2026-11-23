//
#ifndef TFCCardContext_Protocol_h
#define TFCCardContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFCCardData.h"
#include "TFCCardDataSource-Protocol.h"

@protocol TFCCardContext <NSObject>

@required

@property (readonly, nonatomic) id account;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) TFCCardData *cardData;
@property (readonly, nonatomic) long long displayMode;

@optional

@end

#endif /* TFCCardContext_Protocol_h */
