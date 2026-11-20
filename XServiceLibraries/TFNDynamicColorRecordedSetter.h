//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDynamicColorRecordedSetter_h
#define TFNDynamicColorRecordedSetter_h
@import Foundation;

#include "TFNDynamicColorSetterAdapter-Protocol.h"

@class NSObject;

@interface TFNDynamicColorRecordedSetter : NSObject

@property (nonatomic) SEL selector;
@property (retain, nonatomic) Class declaringClass;
@property (retain, nonatomic) id arguments;
@property (retain, nonatomic) id <TFNDynamicColorSetterAdapter> adapter;

/* instance methods */

@end

#endif /* TFNDynamicColorRecordedSetter_h */
