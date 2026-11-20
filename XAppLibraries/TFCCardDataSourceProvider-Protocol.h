//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFCCardDataSourceProvider_Protocol_h
#define TFCCardDataSourceProvider_Protocol_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"

@protocol TFCCardDataSourceProvider

@required

@property (nonatomic, readonly) id <TFCCardDataSource> cardDataSource;

@optional

@end

#endif /* TFCCardDataSourceProvider_Protocol_h */
