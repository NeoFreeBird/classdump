//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XNAVConfigurationProviding_Protocol_h
#define XNAVConfigurationProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, UIScrollView, XNAVConfiguration;

@protocol XNAVConfigurationProviding <NSObject>

@required

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;

@optional

@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;

@end

#endif /* XNAVConfigurationProviding_Protocol_h */
