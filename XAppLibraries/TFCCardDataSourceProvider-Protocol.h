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
