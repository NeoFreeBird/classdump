//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterSuggestedItem_Protocol_h
#define TFNTwitterSuggestedItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFNTwitterSuggestsInfo;

@protocol TFNTwitterSuggestedItem <NSObject>

@required

@property (nonatomic, readonly) TFNTwitterSuggestsInfo *suggestsInfo;

@optional

@end

#endif /* TFNTwitterSuggestedItem_Protocol_h */
