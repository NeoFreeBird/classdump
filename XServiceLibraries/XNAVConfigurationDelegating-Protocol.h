//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XNAVConfigurationDelegating_Protocol_h
#define XNAVConfigurationDelegating_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIViewController;

@protocol XNAVConfigurationDelegating <NSObject>

@required

@property (readonly, nonatomic) UIViewController *xnav_childForNavigationConfiguration;

@optional

@end

#endif /* XNAVConfigurationDelegating_Protocol_h */
