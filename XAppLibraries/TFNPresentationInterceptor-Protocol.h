//
#ifndef TFNPresentationInterceptor_Protocol_h
#define TFNPresentationInterceptor_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPresentationInterceptor <NSObject>

@required

/* required instance methods */
- (id)viewController:(id)controller willPresentWithPresentationInfo:(id)info;
- (id)viewController:(id)controller willPresentWithPresentationInfo:(id)info;

@optional

@end

#endif /* TFNPresentationInterceptor_Protocol_h */
