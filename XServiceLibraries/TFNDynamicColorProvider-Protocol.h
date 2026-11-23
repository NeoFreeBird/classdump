//
#ifndef TFNDynamicColorProvider_Protocol_h
#define TFNDynamicColorProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNDynamicColorProvider <NSObject>

@required

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) _Bool hasDarkBackground;
@property (nonatomic, readonly) _Bool isHighContrast;

/* required instance methods */
- (id)currentColorStateIdentifier;
- (id)dynamicColorWithIdentifier:(id)identifier;
- (id)dynamicColorWithIdentifier:(id)identifier;

@optional

@end

#endif /* TFNDynamicColorProvider_Protocol_h */
