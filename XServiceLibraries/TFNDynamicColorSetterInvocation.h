//
#ifndef TFNDynamicColorSetterInvocation_h
#define TFNDynamicColorSetterInvocation_h
@import Foundation;

#include "TFNDynamicColorSetterAdapter-Protocol.h"

@class NSObject;

@interface TFNDynamicColorSetterInvocation : NSObject

@property (retain, nonatomic) id object;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id arguments;
@property (retain, nonatomic) id <TFNDynamicColorSetterAdapter> adapter;

/* instance methods */

@end

#endif /* TFNDynamicColorSetterInvocation_h */
