//
#ifndef TFNComposableViewHost_Protocol_h
#define TFNComposableViewHost_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFNComposableViewSet;

@protocol TFNComposableViewHost <NSObject>

@required

@property (nonatomic, readonly) TFNComposableViewSet *viewSet;

@optional

@end

#endif /* TFNComposableViewHost_Protocol_h */
