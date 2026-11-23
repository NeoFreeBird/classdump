//
#ifndef TFNTwitterSuggestedItem_Protocol_h
#define TFNTwitterSuggestedItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNTwitterSuggestsInfo.h"

@protocol TFNTwitterSuggestedItem <NSObject>

@required

@property (nonatomic, readonly) TFNTwitterSuggestsInfo *suggestsInfo;

@optional

@end

#endif /* TFNTwitterSuggestedItem_Protocol_h */
