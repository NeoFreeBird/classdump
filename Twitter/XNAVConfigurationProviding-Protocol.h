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
