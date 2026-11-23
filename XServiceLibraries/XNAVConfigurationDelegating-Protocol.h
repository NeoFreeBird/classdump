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
