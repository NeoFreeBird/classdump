//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XNAVContentScrollViewProviding_Protocol_h
#define XNAVContentScrollViewProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIScrollView;

@protocol XNAVContentScrollViewProviding <NSObject>

@required

@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;

@optional

@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;

@end

#endif /* XNAVContentScrollViewProviding_Protocol_h */
