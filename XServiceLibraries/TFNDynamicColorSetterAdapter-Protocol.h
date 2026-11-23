//
#ifndef TFNDynamicColorSetterAdapter_Protocol_h
#define TFNDynamicColorSetterAdapter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNDynamicColorSetterAdapter <NSObject>

@required

/* required instance methods */
- (id)blockRecordingDynamicColorSetter:(SEL)setter withRecorder:(id /* block */)recorder;
- (id)dynamicColorSetterArguments:(id)arguments forObject:(id)object;
- (void)invokeDynamicColorSetter:(void * /* function */)setter forObject:(id)object withSelector:(SEL)selector arguments:(id)arguments;
- (_Bool)dynamicColorSetterWithArguments:(id)arguments shouldOverwriteSetterWithArguments:(id)arguments;
- (_Bool)dynamicColorSetterArguments:(id)arguments haveDynamicColorsForObject:(id)object;

@optional

@end

#endif /* TFNDynamicColorSetterAdapter_Protocol_h */
