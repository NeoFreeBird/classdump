//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
